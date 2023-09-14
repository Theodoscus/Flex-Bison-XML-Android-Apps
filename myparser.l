%{
#include "myparser.tab.h"
#include <stdio.h> 
#include <stdlib.h> 

extern int c_flag  ; 	
extern void yyerror(const char *err) ; 
extern void c_check(int c_flag) ;   
extern FILE *eis ;
%}



%option noyywrap 
%option yylineno


DIGIT [0-9]
posINTEGER [1-9]{DIGIT}*|0
string [0-9a-zA-Z_ ]+ 

%%


"<" {yylval.strval = strdup(yytext); return LESS_THAN;}
">" {yylval.strval = strdup(yytext); return GREATER_THAN;}
"/" {yylval.strval = strdup(yytext); return SLASH;}
":" {yylval.strval = strdup(yytext); return COLON;}
"=" {yylval.strval = strdup(yytext); return EQUAL;}
"\"" {yylval.strval = strdup(yytext); return QUOTE;}
"LinearLayout"  {yylval.strval = strdup(yytext); return LINEAR_LAYOUT; }
"RelativeLayout" {yylval.strval = strdup(yytext); return RELATIVE_LAYOUT; }
"TextView"       {yylval.strval = strdup(yytext); return TEXT_VIEW; }
"ImageView"      {yylval.strval = strdup(yytext); return IMAGE_VIEW; }
"Button"         {yylval.strval = strdup(yytext); return BUTTON; }
"RadioGroup"     {yylval.strval = strdup(yytext); return RADIO_GROUP; }
"RadioButton"    {yylval.strval = strdup(yytext); return RADIO_BUTTON; }
"ProgressBar"    {yylval.strval = strdup(yytext); return PROGRESS_BAR; }
"android"	{yylval.strval = strdup(yytext); return ANDROID; }
"id"   {yylval.strval = strdup(yytext); return ID; }
"layout_width" {yylval.strval = strdup(yytext); return LAYOUT_WIDTH; }
"layout_height" {yylval.strval = strdup(yytext); return LAYOUT_HEIGHT; }
"orientation" {yylval.strval = strdup(yytext); return ORIENTATION; }
"text" {yylval.strval = strdup(yytext); return TEXT; }
"textColor" {yylval.strval = strdup(yytext); return TEXT_COLOR; }
"src" {yylval.strval = strdup(yytext); return SRC; }
"padding" {yylval.strval = strdup(yytext); return PADDING; }
"button_count" {yylval.strval = strdup(yytext); return BUTTON_COUNT; }
"max" {yylval.strval = strdup(yytext); return MAX; }
"progress" {yylval.strval = strdup(yytext); return PROGRESS; }
"checkedButton" {yylval.strval = strdup(yytext); return CHECKED_BUTTON; }
\"{posINTEGER}\" {yylval.strval = strdup(yytext); return POSITIVE_INT; }
\"{string}\" {yylval.strval = strdup(yytext); return ALPHANUMERIC; }
. {yylval.strval = strdup(yytext); return ANYCHAR;}
[ \t\n\r\f\v]+ {} 
\/\*[ \n\t0-9a-zA-Z_]+\*\/ {}
<<EOF>> {c_check(c_flag); return 0;}  


%%


