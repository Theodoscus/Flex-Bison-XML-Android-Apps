%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern FILE *yyin;
extern int yylineno;
extern int yylex();
extern char* yytext;
FILE *eis ;
int id_flag = 0  ; 
int c_flag = 1 ; 
int pc_flag = 0; 
int layoutheight=0;
int layoutwidth=0;
int id=0;
int radiobuttonid=0;
int text=0;
int textcolor=0;
int src=0;
int progress=0;
int max=0;
int checkedbutton=0;
int padding=0;
int orientation=0;
int buttoncount=0;
char idcheck[1000][1000];
char checkedButton[1000][1000];
char radioButton[1000][1000];
int count=0;
int count2=0;
int count3=0;
int check=0;
int Max=0;
int Progress=0;
int rbuttoncount=0;
int rbuttonvalue=0;
void c_check(int c_flag);
void yyerror(const char *err);
void yyerror2(const char *err);

%}

%define parse.error verbose

%union{
int intval;
float floatval;
char charval;
char* strval;

}

%token <strval> LESS_THAN "less than"
%token <strval> GREATER_THAN "greater than"
%token <strval> LINEAR_LAYOUT "linear"
%token <strval> RELATIVE_LAYOUT "relative"
%token <strval> ANDROID "android"
%token <strval> SLASH "slash"
%token <strval> COLON "colon"
%token <strval> EQUAL "equal"
%token <strval> QUOTE "quote"
%token <strval> TEXT_VIEW "textview"
%token <strval> IMAGE_VIEW "imageview"
%token <strval> BUTTON "button"
%token <strval> RADIO_GROUP "radiogroup"
%token <strval> RADIO_BUTTON "radiobutton"
%token <strval> CHECKED_BUTTON "checkedbutton"
%token <strval> PROGRESS_BAR "progressbar"
%token <strval> PROGRESS "progress"
%token <strval> LAYOUT_WIDTH "layout width"
%token <strval> LAYOUT_HEIGHT "layout height"
%token <strval> ORIENTATION "orientation"
%token <strval> TEXT "text"
%token <strval> TEXT_COLOR "text color"
%token <strval> SRC "src"
%token <strval> PADDING "padding"
%token <strval> MAX "max"
%token <strval> ID "id"
%token <strval> ALPHANUMERIC "alphanumeric"
%token <strval> POSITIVE_INT "positive int"
%token <strval> BUTTON_COUNT "button count"
%token <strval> ANYCHAR "character"
%token <strval> T_EOF 0 "end of file"

%type <strval> program buttoncount radiobuttonid radiogroupend empty relative linear linearelements relativeelements linearend  relativeend linearattribute linearattributes relativeattribute relativeattributes layout relativeelement linearelement textview textviewattributes textviewattribute imageview imageviewattributes imageviewattribute button buttonattributes buttonattribute radiogroup radiogroupattributes radiogroupattribute radiobuttons radiobutton radiobuttonattributes radiobuttonattribute progressbar progressattributes progressattribute layoutheight layoutwidth id orientation text textcolor src padding checkedbutton max progress



%%

program:  layout 

layout: linear 
        | relative 

linear:  LESS_THAN LINEAR_LAYOUT linearattributes {if ((layoutheight<1)||(layoutwidth<1)){yyerror2("Missing a layout width or layout height attribute!");}else if((layoutheight>1)||(layoutwidth>1)){yyerror2("You have placed layout_width or layout_height attributes more than one time. Please remove the duplicates and try again!");} layoutheight=0; layoutwidth=0; if((id>1)||(orientation>1)){yyerror2("You have placed id or orientation attributes more than one time. Please remove the duplicates and try again!");} id=0; orientation=0;} GREATER_THAN linearelements linearend

relative:   LESS_THAN RELATIVE_LAYOUT relativeattributes GREATER_THAN {if ((layoutheight<1)||(layoutwidth<1)){yyerror2("Missing a layout width or layout height attribute!");}else if((layoutheight>1)||(layoutwidth>1)){yyerror2("You have placed layout_width or layout_height attributes more than one time. Please remove the duplicates and try again!");} layoutheight=0; layoutwidth=0; if((id>1)){yyerror2("You have placed id attribute more than one time. Please remove the duplicates and try again!");} id=0;} relativeelements relativeend 
            | LESS_THAN RELATIVE_LAYOUT relativeattributes GREATER_THAN {if ((layoutheight<1)||(layoutwidth<1)){yyerror2("Missing a layout width or layout height attribute!");}else if((layoutheight>1)||(layoutwidth>1)){yyerror2("You have placed layout_width or layout_height attributes more than one time. Please remove the duplicates and try again!");} layoutheight=0; layoutwidth=0; if((id>1)){yyerror2("You have placed id attribute more than one time. Please remove the duplicates and try again!");} id=0;} relativeend
            | LESS_THAN RELATIVE_LAYOUT relativeattributes empty {if ((layoutheight<1)||(layoutwidth<1)){yyerror2("Missing a layout width or layout height attribute!");}else if((layoutheight>1)||(layoutwidth>1)){yyerror2("You have placed layout_width or layout_height attributes more than one time. Please remove the duplicates and try again!");} layoutheight=0; layoutwidth=0; if((id>1)){yyerror2("You have placed id attribute more than one time. Please remove the duplicates and try again!");} id=0;}
            


linearelements:     linearelements linearelement
                    | linearelement 

relativeelements:   relativeelements relativeelement
                    | relativeelement
                    
                    
                    
                    

linearelement:	    textview 
                    | imageview 
                    | button 
                    | radiogroup 
                    | progressbar 
                    | linear 
                    | relative 
                    
                    
                    
                    

relativeelement:   textview 
                    | imageview 
                    | button 
                    | radiogroup 
                    | progressbar 
                    | linear 
                    | relative 
                    
                    
                              

linearend: LESS_THAN SLASH LINEAR_LAYOUT GREATER_THAN

relativeend: LESS_THAN SLASH RELATIVE_LAYOUT GREATER_THAN
		
empty: SLASH GREATER_THAN

linearattributes:  linearattribute linearattributes 
                    | linearattribute 
                    

      

linearattribute: layoutwidth {layoutwidth++;}
                    | layoutheight {layoutheight++;}
                    | id {id++;}
                    | orientation {orientation++;}
                    
         

relativeattributes:   relativeattribute relativeattributes
                    | relativeattribute
                    

relativeattribute: layoutwidth {layoutwidth++;}
                    | layoutheight {layoutheight++;}
                    | id {id++;}

textview: LESS_THAN TEXT_VIEW textviewattributes empty {if ((layoutheight<1)||(layoutwidth<1)||(text<1)){yyerror2("Missing a layout width, layout height or text attribute!");}else if((layoutheight>1)||(layoutwidth>1)||(text>1)){yyerror2("You have placed layout_width, layout_height or text attributes more than one time. Please remove the duplicates and try again!");} layoutheight=0; layoutwidth=0; text=0; if((id>1)||(textcolor>1)){yyerror2("You have placed id or textcolor attribute more than one time. Please remove the duplicates and try again!");} id=0; textcolor=0;}

textviewattributes: textviewattribute
                    | textviewattribute textviewattributes
                    

textviewattribute:  id {id++;}
	| textcolor {textcolor++;}
    | layoutheight {layoutheight++;}
    | layoutwidth  {layoutwidth++;}
    | text {text++;}

imageview: LESS_THAN IMAGE_VIEW imageviewattributes empty {if ((layoutheight<1)||(layoutwidth<1)||(src<1)){yyerror2("Missing a layout width, layout height or src attribute!");}else if((layoutheight>1)||(layoutwidth>1)||(src>1)){yyerror2("You have placed layout_width, layout_height or src attributes more than one time. Please remove the duplicates and try again!");} layoutheight=0; layoutwidth=0; src=0; if((id>1)||(padding>1)){yyerror2("You have placed id or padding attribute more than one time. Please remove the duplicates and try again!");} id=0; padding=0;}

imageviewattributes:    imageviewattribute 
                        |imageviewattribute imageviewattributes;

imageviewattribute: id {id++;}
	                | padding {padding++;}
                    | layoutheight {layoutheight++;}
                    | layoutwidth {layoutwidth++;}
                    | src {src++;}

button: LESS_THAN BUTTON buttonattributes empty {if ((layoutheight<1)||(layoutwidth<1)||(text<1)){yyerror2("Missing a layout width, layout height or text attribute!");}else if((layoutheight>1)||(layoutwidth>1)||(text>1)){yyerror2("You have placed layout_width, layout_height or text attributes more than one time. Please remove the duplicates and try again!");} layoutheight=0; layoutwidth=0; text=0; if((id>1)||(padding>1)){yyerror2("You have placed id or padding attribute more than one time. Please remove the duplicates and try again!");} id=0; padding=0;}

buttonattributes:   buttonattribute 
                    |buttonattribute buttonattributes

buttonattribute: id {id++;}
	            | padding{padding++;}
                | text {text++;}
                | layoutheight {layoutheight++;}
                | layoutwidth {layoutwidth++;}

radiogroup: LESS_THAN RADIO_GROUP radiogroupattributes GREATER_THAN {if ((layoutheight<1)||(layoutwidth<1)||(buttoncount<1)){yyerror2("Missing a layout width, layout height or button count attribute!");}else if((layoutheight>1)||(layoutwidth>1)||(buttoncount>1)){yyerror2("You have placed layout_width, layout_height or button_count attributes more than one time. Please remove the duplicates and try again!");} layoutheight=0; layoutwidth=0; buttoncount=0; if((id>1)||(checkedbutton>1)){yyerror2("You have placed id or checkedbutton attribute more than one time. Please remove the duplicates and try again!");} id=0; checkedbutton=0;} radiobuttons radiogroupend 

radiogroupattributes:   radiogroupattribute 
                        | radiogroupattribute radiogroupattributes

radiogroupattribute: id {id++;}
	                | checkedbutton {checkedbutton++;}
                    | layoutheight {layoutheight++;}
                    | layoutwidth {layoutwidth++;}
                    | buttoncount {buttoncount++;}

radiobuttons: radiobutton
                | radiobuttons radiobutton

radiobutton: LESS_THAN RADIO_BUTTON radiobuttonattributes empty {if ((layoutheight<1)||(layoutwidth<1)||(text<1)){yyerror2("Missing a layout width, layout height or text attribute!");}else if((layoutheight>1)||(layoutwidth>1)||(text>1)){yyerror2("You have placed layout_width, layout_height or text attributes more than one time. Please remove the duplicates and try again!");} layoutheight=0; layoutwidth=0; text=0; if((radiobuttonid>1)){yyerror2("You have placed id attribute more than one time. Please remove the duplicates and try again!");} radiobuttonid=0;}

radiobuttonattributes: radiobuttonattribute 
                        | radiobuttonattribute radiobuttonattributes

radiobuttonattribute:   radiobuttonid {radiobuttonid++;}
                        | layoutheight  {layoutheight++;}
                        | layoutwidth  {layoutwidth++;}
                        | text {text++;}

radiogroupend: LESS_THAN SLASH RADIO_GROUP GREATER_THAN {for (int j=0; j<count2; j++){int result4 = strcmp(checkedButton[count3], radioButton[j]); if (result4 == 0){check=1;}} if (check!=1){yyerror2("Attribute checked button must have value same as one of the radio buttons id. Please try again.");} check=0; count3++; if(rbuttoncount!=rbuttonvalue){yyerror2("Attribute button_count must be the same number as the number of RadioButton elements. Please try again.");}rbuttoncount=0; rbuttonvalue=0;}

progressbar: LESS_THAN PROGRESS_BAR progressattributes empty {if ((layoutheight<1)||(layoutwidth<1)){yyerror2("Missing a layout width or layout height attribute!");}else if((layoutheight>1)||(layoutwidth>1)){yyerror2("You have placed layout_width or layout_height attributes more than one time. Please remove the duplicates and try again!");} layoutheight=0; layoutwidth=0; if((id>1)||(max>1)||(progress>1)){yyerror2("You have placed id, max or progress attribute more than one time. Please remove the duplicates and try again!");} if (((max==1)&&(progress!=1))||((max!=1)&&(progress==1))){yyerror2("Attributes max and progress must co-exist in the same element."); }id=0; max=0; progress=0; if (Progress>Max){yyerror2("Attribute progress can not be larger than attribute max. Please try again.");} Progress=0; Max=0;}

progressattributes: progressattribute   
                    |progressattribute progressattributes

progressattribute: id {id++;}
	| max {max++;}
	| progress {progress++;}
    | layoutheight {layoutheight++;}
    | layoutwidth {layoutwidth++;}

widthandheight: ALPHANUMERIC {char* value2 = yytext; int result2 = strcmp(value2, "\"wrap_content\""); int result3 = strcmp(value2,"\"match_parent\"" ); if ((result2!=0)&&(result3!=0)){yyerror2("Attributes layout_width and layout_height can only take values positive integer, \"wrap_content\" and \"match_parent\"!");}} | POSITIVE_INT

layoutheight: ANDROID COLON LAYOUT_HEIGHT EQUAL widthandheight 

layoutwidth: ANDROID COLON LAYOUT_WIDTH EQUAL widthandheight

id: ANDROID COLON ID EQUAL ALPHANUMERIC {char* value = yytext; strcpy(idcheck[count], value); for (int i=0; i<count; i++){int result = strcmp(idcheck[i], value); if (result == 0){yyerror2("ID attributes can not have the same value. Please choose different value for the id attribute on this line and try again."); }} count++;}

radiobuttonid: ANDROID COLON ID EQUAL ALPHANUMERIC {char* value = yytext; strcpy(idcheck[count], value); strcpy(radioButton[count2], value); for (int i=0; i<count; i++){int result = strcmp(idcheck[i], value); if (result == 0){yyerror2("ID attributes can not have the same value. Please choose different value for the id attribute on this line and try again."); }} count++; count2++; rbuttoncount++;}

orientation: ANDROID COLON ORIENTATION EQUAL ALPHANUMERIC

text: ANDROID COLON TEXT EQUAL ALPHANUMERIC

textcolor: ANDROID COLON TEXT_COLOR EQUAL ALPHANUMERIC

src: ANDROID COLON SRC EQUAL ALPHANUMERIC

padding: ANDROID COLON PADDING EQUAL POSITIVE_INT

checkedbutton: ANDROID COLON CHECKED_BUTTON EQUAL ALPHANUMERIC {char* value = yytext; strcpy(checkedButton[count3], value);}

max: ANDROID COLON MAX EQUAL POSITIVE_INT {char* value = yytext; char numericStr[20]; sscanf(value, "\"%[^\"]\"", numericStr); Max = atoi(numericStr);}

progress: ANDROID COLON PROGRESS EQUAL POSITIVE_INT {char* value = yytext; char numericStr[20]; sscanf(value, "\"%[^\"]\"", numericStr); Progress = atoi(numericStr);}

buttoncount: ANDROID COLON BUTTON_COUNT EQUAL POSITIVE_INT {char* value = yytext; char numericStr[20]; sscanf(value, "\"%[^\"]\"", numericStr); rbuttonvalue = atoi(numericStr);}

%%

int main(int argc, char *argv[]){

        if(argc > 1){
               yyin = fopen(argv[1], "r");
               eis = fopen(argv[1], "r");
        if (yyin == NULL){
            perror ("Error opening file"); return -1;

        }
      }
    yyparse();
    fclose(yyin);
    return 0;
}



void yyerror(const char *err) {

 

printf("\n\n Input: \n\n");
  

int count = 1;


    char line[256]; 
   
    
    while (fgets(line, sizeof line, eis) != NULL) 
    {
        if (count == yylineno)
        {
            printf("%s",line);
            fclose(eis);
        }
        else
        {
           printf("%s",line);
           count++;
        }
    }
    fclose(eis);
printf("\n\nError at line %d. There is the following issue with '%s': %s. ", yylineno ,yytext, err);
c_flag = 0; 
}

void yyerror2(const char *err) {

 

if (c_flag == 1) 

{

printf("\n\n Input: \n\n");
   


int count = 1;


    char line[256]; 
    
    
    while (fgets(line, sizeof line, eis) != NULL) 
    {
        if (count == yylineno)
        {
            printf("%s",line);
            fclose(eis);
        }
        else
        {
           printf("%s",line);
           count++;
        }
    }
    fclose(eis);



printf("\n\n Error at line %d : %s \n", yylineno,err);
c_flag = 0; 
}
}

void c_check(int c_flag) {

if (c_flag == 1) 

{

   
   int c;
   
   printf("\n\n Input: \n\n");
   
   while ((c = getc(eis)) != EOF)
       
       {
               putchar(c);
      }
   
   fclose(eis);
   printf("\n\n The input file was correctly written. \n");
    
    }


}

