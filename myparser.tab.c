/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "myparser.y"

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


#line 114 "myparser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "myparser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_LESS_THAN = 3,                  /* "less than"  */
  YYSYMBOL_GREATER_THAN = 4,               /* "greater than"  */
  YYSYMBOL_LINEAR_LAYOUT = 5,              /* "linear"  */
  YYSYMBOL_RELATIVE_LAYOUT = 6,            /* "relative"  */
  YYSYMBOL_ANDROID = 7,                    /* "android"  */
  YYSYMBOL_SLASH = 8,                      /* "slash"  */
  YYSYMBOL_COLON = 9,                      /* "colon"  */
  YYSYMBOL_EQUAL = 10,                     /* "equal"  */
  YYSYMBOL_QUOTE = 11,                     /* "quote"  */
  YYSYMBOL_TEXT_VIEW = 12,                 /* "textview"  */
  YYSYMBOL_IMAGE_VIEW = 13,                /* "imageview"  */
  YYSYMBOL_BUTTON = 14,                    /* "button"  */
  YYSYMBOL_RADIO_GROUP = 15,               /* "radiogroup"  */
  YYSYMBOL_RADIO_BUTTON = 16,              /* "radiobutton"  */
  YYSYMBOL_CHECKED_BUTTON = 17,            /* "checkedbutton"  */
  YYSYMBOL_PROGRESS_BAR = 18,              /* "progressbar"  */
  YYSYMBOL_PROGRESS = 19,                  /* "progress"  */
  YYSYMBOL_LAYOUT_WIDTH = 20,              /* "layout width"  */
  YYSYMBOL_LAYOUT_HEIGHT = 21,             /* "layout height"  */
  YYSYMBOL_ORIENTATION = 22,               /* "orientation"  */
  YYSYMBOL_TEXT = 23,                      /* "text"  */
  YYSYMBOL_TEXT_COLOR = 24,                /* "text color"  */
  YYSYMBOL_SRC = 25,                       /* "src"  */
  YYSYMBOL_PADDING = 26,                   /* "padding"  */
  YYSYMBOL_MAX = 27,                       /* "max"  */
  YYSYMBOL_ID = 28,                        /* "id"  */
  YYSYMBOL_ALPHANUMERIC = 29,              /* "alphanumeric"  */
  YYSYMBOL_POSITIVE_INT = 30,              /* "positive int"  */
  YYSYMBOL_BUTTON_COUNT = 31,              /* "button count"  */
  YYSYMBOL_ANYCHAR = 32,                   /* "character"  */
  YYSYMBOL_YYACCEPT = 33,                  /* $accept  */
  YYSYMBOL_program = 34,                   /* program  */
  YYSYMBOL_layout = 35,                    /* layout  */
  YYSYMBOL_linear = 36,                    /* linear  */
  YYSYMBOL_37_1 = 37,                      /* $@1  */
  YYSYMBOL_relative = 38,                  /* relative  */
  YYSYMBOL_39_2 = 39,                      /* $@2  */
  YYSYMBOL_40_3 = 40,                      /* $@3  */
  YYSYMBOL_linearelements = 41,            /* linearelements  */
  YYSYMBOL_relativeelements = 42,          /* relativeelements  */
  YYSYMBOL_linearelement = 43,             /* linearelement  */
  YYSYMBOL_relativeelement = 44,           /* relativeelement  */
  YYSYMBOL_linearend = 45,                 /* linearend  */
  YYSYMBOL_relativeend = 46,               /* relativeend  */
  YYSYMBOL_empty = 47,                     /* empty  */
  YYSYMBOL_linearattributes = 48,          /* linearattributes  */
  YYSYMBOL_linearattribute = 49,           /* linearattribute  */
  YYSYMBOL_relativeattributes = 50,        /* relativeattributes  */
  YYSYMBOL_relativeattribute = 51,         /* relativeattribute  */
  YYSYMBOL_textview = 52,                  /* textview  */
  YYSYMBOL_textviewattributes = 53,        /* textviewattributes  */
  YYSYMBOL_textviewattribute = 54,         /* textviewattribute  */
  YYSYMBOL_imageview = 55,                 /* imageview  */
  YYSYMBOL_imageviewattributes = 56,       /* imageviewattributes  */
  YYSYMBOL_imageviewattribute = 57,        /* imageviewattribute  */
  YYSYMBOL_button = 58,                    /* button  */
  YYSYMBOL_buttonattributes = 59,          /* buttonattributes  */
  YYSYMBOL_buttonattribute = 60,           /* buttonattribute  */
  YYSYMBOL_radiogroup = 61,                /* radiogroup  */
  YYSYMBOL_62_4 = 62,                      /* $@4  */
  YYSYMBOL_radiogroupattributes = 63,      /* radiogroupattributes  */
  YYSYMBOL_radiogroupattribute = 64,       /* radiogroupattribute  */
  YYSYMBOL_radiobuttons = 65,              /* radiobuttons  */
  YYSYMBOL_radiobutton = 66,               /* radiobutton  */
  YYSYMBOL_radiobuttonattributes = 67,     /* radiobuttonattributes  */
  YYSYMBOL_radiobuttonattribute = 68,      /* radiobuttonattribute  */
  YYSYMBOL_radiogroupend = 69,             /* radiogroupend  */
  YYSYMBOL_progressbar = 70,               /* progressbar  */
  YYSYMBOL_progressattributes = 71,        /* progressattributes  */
  YYSYMBOL_progressattribute = 72,         /* progressattribute  */
  YYSYMBOL_widthandheight = 73,            /* widthandheight  */
  YYSYMBOL_layoutheight = 74,              /* layoutheight  */
  YYSYMBOL_layoutwidth = 75,               /* layoutwidth  */
  YYSYMBOL_id = 76,                        /* id  */
  YYSYMBOL_radiobuttonid = 77,             /* radiobuttonid  */
  YYSYMBOL_orientation = 78,               /* orientation  */
  YYSYMBOL_text = 79,                      /* text  */
  YYSYMBOL_textcolor = 80,                 /* textcolor  */
  YYSYMBOL_src = 81,                       /* src  */
  YYSYMBOL_padding = 82,                   /* padding  */
  YYSYMBOL_checkedbutton = 83,             /* checkedbutton  */
  YYSYMBOL_max = 84,                       /* max  */
  YYSYMBOL_progress = 85,                  /* progress  */
  YYSYMBOL_buttoncount = 86                /* buttoncount  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   212

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  33
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  54
/* YYNRULES -- Number of rules.  */
#define YYNRULES  109
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  189

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   287


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    92,    92,    94,    95,    97,    97,    99,    99,   100,
     100,   101,   105,   106,   108,   109,   115,   116,   117,   118,
     119,   120,   121,   127,   128,   129,   130,   131,   132,   133,
     138,   140,   142,   144,   145,   150,   151,   152,   153,   157,
     158,   161,   162,   163,   165,   167,   168,   171,   172,   173,
     174,   175,   177,   179,   180,   182,   183,   184,   185,   186,
     188,   190,   191,   193,   194,   195,   196,   197,   199,   199,
     201,   202,   204,   205,   206,   207,   208,   210,   211,   213,
     215,   216,   218,   219,   220,   221,   223,   225,   227,   228,
     230,   231,   232,   233,   234,   236,   236,   238,   240,   242,
     244,   246,   248,   250,   252,   254,   256,   258,   260,   262
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "\"less than\"",
  "\"greater than\"", "\"linear\"", "\"relative\"", "\"android\"",
  "\"slash\"", "\"colon\"", "\"equal\"", "\"quote\"", "\"textview\"",
  "\"imageview\"", "\"button\"", "\"radiogroup\"", "\"radiobutton\"",
  "\"checkedbutton\"", "\"progressbar\"", "\"progress\"",
  "\"layout width\"", "\"layout height\"", "\"orientation\"", "\"text\"",
  "\"text color\"", "\"src\"", "\"padding\"", "\"max\"", "\"id\"",
  "\"alphanumeric\"", "\"positive int\"", "\"button count\"",
  "\"character\"", "$accept", "program", "layout", "linear", "$@1",
  "relative", "$@2", "$@3", "linearelements", "relativeelements",
  "linearelement", "relativeelement", "linearend", "relativeend", "empty",
  "linearattributes", "linearattribute", "relativeattributes",
  "relativeattribute", "textview", "textviewattributes",
  "textviewattribute", "imageview", "imageviewattributes",
  "imageviewattribute", "button", "buttonattributes", "buttonattribute",
  "radiogroup", "$@4", "radiogroupattributes", "radiogroupattribute",
  "radiobuttons", "radiobutton", "radiobuttonattributes",
  "radiobuttonattribute", "radiogroupend", "progressbar",
  "progressattributes", "progressattribute", "widthandheight",
  "layoutheight", "layoutwidth", "id", "radiobuttonid", "orientation",
  "text", "textcolor", "src", "padding", "checkedbutton", "max",
  "progress", "buttoncount", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-82)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      42,    13,    25,   -82,   -82,   -82,    67,    68,   -82,    71,
     -82,    67,   -82,   -82,   -82,   -82,    74,    69,    68,   -82,
     -82,   -82,    22,    78,   -82,    -6,   -82,    86,   -82,   -82,
      89,    91,    94,    97,   111,   111,   112,   -82,     6,     6,
      82,    92,    73,   -82,   -82,   117,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   128,   -82,   -82,   -82,   -82,   -82,
     -82,   122,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   125,
     133,   135,   136,   142,    41,   -82,   -82,   104,   -82,   -82,
     129,   143,   146,   125,   -82,   -82,   -82,   -82,   -82,   147,
     146,   133,   -82,   -82,   -82,   -82,   -82,   148,   146,   135,
     -82,   -82,   -82,   -82,   -82,   149,   155,   136,   -82,   -82,
     -82,   -82,   -82,   153,   146,   142,   -82,   -82,   -82,   -82,
     -82,   158,   160,     0,   -82,   -82,   108,   -82,   -82,   118,
     -82,   -82,    20,   -82,   -82,    75,   -82,   -82,   162,   -82,
     141,   157,   161,   164,   165,   166,   167,   168,   169,   -82,
     151,   152,   154,   156,   159,   163,   171,   174,   -82,   170,
     172,   -82,   -82,   -82,   -82,   -82,   -82,   175,    44,   -82,
     -82,   -82,   -82,   176,   146,   175,   -82,   -82,   -82,   -82,
     177,   127,   -82,   -82,   180,   179,   -82,   178,   -82
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     2,     3,     4,     0,     0,     1,     0,
       5,    34,    36,    35,    37,    38,     0,     0,    40,    42,
      41,    43,     0,     0,    33,     0,     7,     0,    11,    39,
       0,     0,     0,     0,     0,     0,     0,    32,     0,     0,
       0,     0,     0,    21,    22,     0,    13,    16,    17,    18,
      19,    20,    28,    29,     0,    15,    23,    24,    25,    26,
      27,     0,    10,    95,    96,    98,    97,   101,    99,     0,
       0,     0,     0,     0,     0,    12,     6,     0,    14,     8,
       0,     0,     0,    45,    49,    50,    47,    51,    48,     0,
       0,    53,    57,    58,    55,    59,    56,     0,     0,    61,
      66,    67,    63,    65,    64,     0,     0,    70,    74,    75,
      72,    73,    76,     0,     0,    88,    93,    94,    90,    91,
      92,     0,     0,     0,    44,    46,     0,    52,    54,     0,
      60,    62,     0,    68,    71,     0,    87,    89,     0,    31,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    77,     0,
       0,   102,   103,   104,   105,   106,   109,     0,     0,    78,
      69,   108,   107,     0,     0,    80,    83,    84,    82,    85,
       0,     0,    79,    81,     0,     0,    86,     0,   100
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -82,   -82,   -82,     3,   -82,     4,   -82,   -82,   -82,   -82,
     145,   137,   -82,   140,   -81,   184,   -82,   181,   -82,   -28,
     113,   -82,   -27,    81,   -82,   -25,    98,   -82,   -23,   -82,
      96,   -82,   -82,    47,    23,   -82,   -82,   -22,    90,   -82,
     173,    -7,    -2,    54,   -82,   -82,   -69,   -82,   -82,   -65,
     -82,   -82,   -82,   -82
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     3,    43,    23,    44,    35,    36,    45,    54,
      46,    55,    76,    62,    28,    10,    11,    17,    18,    47,
      82,    83,    48,    90,    91,    49,    98,    99,    50,   146,
     106,   107,   157,   158,   174,   175,   170,    51,   114,   115,
      65,    12,    13,    14,   178,    15,    87,    88,    95,    96,
     111,   119,   120,   112
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      19,   124,   103,     4,     5,    20,   104,    56,    57,   127,
      58,    19,    59,    60,    30,    31,    20,   130,     6,     7,
      30,    31,    33,   140,   141,     8,    56,    57,    33,    58,
     103,    59,    60,   136,   104,    63,    64,   144,    52,    53,
      30,    31,    30,    31,    32,     1,     6,     7,    33,   121,
      33,   145,   180,    69,    70,    71,    72,    52,    53,    73,
     167,    21,    84,    92,   100,   108,   116,    85,    93,   101,
     109,   117,    21,    26,     9,    16,    84,    27,     6,     7,
      22,    85,    34,    25,    92,    69,    70,    71,    72,    93,
      37,    73,   100,   182,   147,    30,    31,   101,   179,    38,
     108,    39,   148,    33,    40,   109,   179,    41,   116,     6,
       7,    67,    80,   117,    42,    61,    69,    70,    71,    72,
      74,    68,    73,    86,    94,   102,   110,   118,    30,    31,
      80,    77,    81,   142,   143,   122,    33,    86,    30,    31,
      89,   140,    97,   105,   143,    94,    33,    30,    31,   113,
     140,   150,   123,   102,    27,   185,   126,   129,   132,   133,
     176,   110,   135,   138,   139,   177,   149,   151,   176,   118,
     156,   152,   128,   177,   153,   154,   155,   168,   159,   160,
     161,   162,   173,   163,   186,   181,   164,   167,   165,   187,
      75,    78,   184,   166,    79,    24,   125,   131,   183,    29,
     171,     0,   172,   134,   169,   137,     0,   188,     0,     0,
       0,     0,    66
};

static const yytype_int16 yycheck[] =
{
       7,    82,    71,     0,     0,     7,    71,    35,    35,    90,
      35,    18,    35,    35,    20,    21,    18,    98,     5,     6,
      20,    21,    28,    23,    24,     0,    54,    54,    28,    54,
      99,    54,    54,   114,    99,    29,    30,    17,    35,    35,
      20,    21,    20,    21,    22,     3,     5,     6,    28,     8,
      28,    31,     8,    12,    13,    14,    15,    54,    54,    18,
      16,     7,    69,    70,    71,    72,    73,    69,    70,    71,
      72,    73,    18,     4,     7,     7,    83,     8,     5,     6,
       9,    83,     4,     9,    91,    12,    13,    14,    15,    91,
       4,    18,    99,   174,    19,    20,    21,    99,   167,    10,
     107,    10,    27,    28,    10,   107,   175,    10,   115,     5,
       6,    29,     8,   115,     3,     3,    12,    13,    14,    15,
       3,    29,    18,    69,    70,    71,    72,    73,    20,    21,
       8,     3,     7,    25,    26,     6,    28,    83,    20,    21,
       7,    23,     7,     7,    26,    91,    28,    20,    21,     7,
      23,    10,     9,    99,     8,    28,     9,     9,     9,     4,
     167,   107,     9,     5,     4,   167,     4,    10,   175,   115,
       3,    10,    91,   175,    10,    10,    10,     3,    10,    10,
      29,    29,     7,    29,     4,     9,    30,    16,    29,    10,
      45,    54,    15,    30,    54,    11,    83,    99,   175,    18,
      30,    -1,    30,   107,   157,   115,    -1,    29,    -1,    -1,
      -1,    -1,    39
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    34,    35,    36,    38,     5,     6,     0,     7,
      48,    49,    74,    75,    76,    78,     7,    50,    51,    74,
      75,    76,     9,    37,    48,     9,     4,     8,    47,    50,
      20,    21,    22,    28,     4,    39,    40,     4,    10,    10,
      10,    10,     3,    36,    38,    41,    43,    52,    55,    58,
      61,    70,    36,    38,    42,    44,    52,    55,    58,    61,
      70,     3,    46,    29,    30,    73,    73,    29,    29,    12,
      13,    14,    15,    18,     3,    43,    45,     3,    44,    46,
       8,     7,    53,    54,    74,    75,    76,    79,    80,     7,
      56,    57,    74,    75,    76,    81,    82,     7,    59,    60,
      74,    75,    76,    79,    82,     7,    63,    64,    74,    75,
      76,    83,    86,     7,    71,    72,    74,    75,    76,    84,
      85,     8,     6,     9,    47,    53,     9,    47,    56,     9,
      47,    59,     9,     4,    63,     9,    47,    71,     5,     4,
      23,    24,    25,    26,    17,    31,    62,    19,    27,     4,
      10,    10,    10,    10,    10,    10,     3,    65,    66,    10,
      10,    29,    29,    29,    30,    29,    30,    16,     3,    66,
      69,    30,    30,     7,    67,    68,    74,    75,    77,    79,
       8,     9,    47,    67,    15,    28,     4,    10,    29
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    33,    34,    35,    35,    37,    36,    39,    38,    40,
      38,    38,    41,    41,    42,    42,    43,    43,    43,    43,
      43,    43,    43,    44,    44,    44,    44,    44,    44,    44,
      45,    46,    47,    48,    48,    49,    49,    49,    49,    50,
      50,    51,    51,    51,    52,    53,    53,    54,    54,    54,
      54,    54,    55,    56,    56,    57,    57,    57,    57,    57,
      58,    59,    59,    60,    60,    60,    60,    60,    62,    61,
      63,    63,    64,    64,    64,    64,    64,    65,    65,    66,
      67,    67,    68,    68,    68,    68,    69,    70,    71,    71,
      72,    72,    72,    72,    72,    73,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     0,     7,     0,     7,     0,
       6,     4,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     2,     2,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     4,     1,     2,     1,     1,     1,
       1,     1,     4,     1,     2,     1,     1,     1,     1,     1,
       4,     1,     2,     1,     1,     1,     1,     1,     0,     7,
       1,     2,     1,     1,     1,     1,     1,     1,     2,     4,
       1,     2,     1,     1,     1,     1,     4,     4,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     5,     5,     5,
       5,     5,     5,     5,     5,     5,     5,     5,     5,     5
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= T_EOF)
    {
      yychar = T_EOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 5: /* $@1: %empty  */
#line 97 "myparser.y"
                                                  {if ((layoutheight<1)||(layoutwidth<1)){yyerror2("Missing a layout width or layout height attribute!");}else if((layoutheight>1)||(layoutwidth>1)){yyerror2("You have placed layout_width or layout_height attributes more than one time. Please remove the duplicates and try again!");} layoutheight=0; layoutwidth=0; if((id>1)||(orientation>1)){yyerror2("You have placed id or orientation attributes more than one time. Please remove the duplicates and try again!");} id=0; orientation=0;}
#line 1602 "myparser.tab.c"
    break;

  case 7: /* $@2: %empty  */
#line 99 "myparser.y"
                                                                      {if ((layoutheight<1)||(layoutwidth<1)){yyerror2("Missing a layout width or layout height attribute!");}else if((layoutheight>1)||(layoutwidth>1)){yyerror2("You have placed layout_width or layout_height attributes more than one time. Please remove the duplicates and try again!");} layoutheight=0; layoutwidth=0; if((id>1)){yyerror2("You have placed id attribute more than one time. Please remove the duplicates and try again!");} id=0;}
#line 1608 "myparser.tab.c"
    break;

  case 9: /* $@3: %empty  */
#line 100 "myparser.y"
                                                                        {if ((layoutheight<1)||(layoutwidth<1)){yyerror2("Missing a layout width or layout height attribute!");}else if((layoutheight>1)||(layoutwidth>1)){yyerror2("You have placed layout_width or layout_height attributes more than one time. Please remove the duplicates and try again!");} layoutheight=0; layoutwidth=0; if((id>1)){yyerror2("You have placed id attribute more than one time. Please remove the duplicates and try again!");} id=0;}
#line 1614 "myparser.tab.c"
    break;

  case 11: /* relative: "less than" "relative" relativeattributes empty  */
#line 101 "myparser.y"
                                                                 {if ((layoutheight<1)||(layoutwidth<1)){yyerror2("Missing a layout width or layout height attribute!");}else if((layoutheight>1)||(layoutwidth>1)){yyerror2("You have placed layout_width or layout_height attributes more than one time. Please remove the duplicates and try again!");} layoutheight=0; layoutwidth=0; if((id>1)){yyerror2("You have placed id attribute more than one time. Please remove the duplicates and try again!");} id=0;}
#line 1620 "myparser.tab.c"
    break;

  case 35: /* linearattribute: layoutwidth  */
#line 150 "myparser.y"
                             {layoutwidth++;}
#line 1626 "myparser.tab.c"
    break;

  case 36: /* linearattribute: layoutheight  */
#line 151 "myparser.y"
                                   {layoutheight++;}
#line 1632 "myparser.tab.c"
    break;

  case 37: /* linearattribute: id  */
#line 152 "myparser.y"
                         {id++;}
#line 1638 "myparser.tab.c"
    break;

  case 38: /* linearattribute: orientation  */
#line 153 "myparser.y"
                                  {orientation++;}
#line 1644 "myparser.tab.c"
    break;

  case 41: /* relativeattribute: layoutwidth  */
#line 161 "myparser.y"
                               {layoutwidth++;}
#line 1650 "myparser.tab.c"
    break;

  case 42: /* relativeattribute: layoutheight  */
#line 162 "myparser.y"
                                   {layoutheight++;}
#line 1656 "myparser.tab.c"
    break;

  case 43: /* relativeattribute: id  */
#line 163 "myparser.y"
                         {id++;}
#line 1662 "myparser.tab.c"
    break;

  case 44: /* textview: "less than" "textview" textviewattributes empty  */
#line 165 "myparser.y"
                                                       {if ((layoutheight<1)||(layoutwidth<1)||(text<1)){yyerror2("Missing a layout width, layout height or text attribute!");}else if((layoutheight>1)||(layoutwidth>1)||(text>1)){yyerror2("You have placed layout_width, layout_height or text attributes more than one time. Please remove the duplicates and try again!");} layoutheight=0; layoutwidth=0; text=0; if((id>1)||(textcolor>1)){yyerror2("You have placed id or textcolor attribute more than one time. Please remove the duplicates and try again!");} id=0; textcolor=0;}
#line 1668 "myparser.tab.c"
    break;

  case 47: /* textviewattribute: id  */
#line 171 "myparser.y"
                       {id++;}
#line 1674 "myparser.tab.c"
    break;

  case 48: /* textviewattribute: textcolor  */
#line 172 "myparser.y"
                    {textcolor++;}
#line 1680 "myparser.tab.c"
    break;

  case 49: /* textviewattribute: layoutheight  */
#line 173 "myparser.y"
                   {layoutheight++;}
#line 1686 "myparser.tab.c"
    break;

  case 50: /* textviewattribute: layoutwidth  */
#line 174 "myparser.y"
                   {layoutwidth++;}
#line 1692 "myparser.tab.c"
    break;

  case 51: /* textviewattribute: text  */
#line 175 "myparser.y"
           {text++;}
#line 1698 "myparser.tab.c"
    break;

  case 52: /* imageview: "less than" "imageview" imageviewattributes empty  */
#line 177 "myparser.y"
                                                          {if ((layoutheight<1)||(layoutwidth<1)||(src<1)){yyerror2("Missing a layout width, layout height or src attribute!");}else if((layoutheight>1)||(layoutwidth>1)||(src>1)){yyerror2("You have placed layout_width, layout_height or src attributes more than one time. Please remove the duplicates and try again!");} layoutheight=0; layoutwidth=0; src=0; if((id>1)||(padding>1)){yyerror2("You have placed id or padding attribute more than one time. Please remove the duplicates and try again!");} id=0; padding=0;}
#line 1704 "myparser.tab.c"
    break;

  case 55: /* imageviewattribute: id  */
#line 182 "myparser.y"
                       {id++;}
#line 1710 "myparser.tab.c"
    break;

  case 56: /* imageviewattribute: padding  */
#line 183 "myparser.y"
                                  {padding++;}
#line 1716 "myparser.tab.c"
    break;

  case 57: /* imageviewattribute: layoutheight  */
#line 184 "myparser.y"
                                   {layoutheight++;}
#line 1722 "myparser.tab.c"
    break;

  case 58: /* imageviewattribute: layoutwidth  */
#line 185 "myparser.y"
                                  {layoutwidth++;}
#line 1728 "myparser.tab.c"
    break;

  case 59: /* imageviewattribute: src  */
#line 186 "myparser.y"
                          {src++;}
#line 1734 "myparser.tab.c"
    break;

  case 60: /* button: "less than" "button" buttonattributes empty  */
#line 188 "myparser.y"
                                                {if ((layoutheight<1)||(layoutwidth<1)||(text<1)){yyerror2("Missing a layout width, layout height or text attribute!");}else if((layoutheight>1)||(layoutwidth>1)||(text>1)){yyerror2("You have placed layout_width, layout_height or text attributes more than one time. Please remove the duplicates and try again!");} layoutheight=0; layoutwidth=0; text=0; if((id>1)||(padding>1)){yyerror2("You have placed id or padding attribute more than one time. Please remove the duplicates and try again!");} id=0; padding=0;}
#line 1740 "myparser.tab.c"
    break;

  case 63: /* buttonattribute: id  */
#line 193 "myparser.y"
                    {id++;}
#line 1746 "myparser.tab.c"
    break;

  case 64: /* buttonattribute: padding  */
#line 194 "myparser.y"
                             {padding++;}
#line 1752 "myparser.tab.c"
    break;

  case 65: /* buttonattribute: text  */
#line 195 "myparser.y"
                       {text++;}
#line 1758 "myparser.tab.c"
    break;

  case 66: /* buttonattribute: layoutheight  */
#line 196 "myparser.y"
                               {layoutheight++;}
#line 1764 "myparser.tab.c"
    break;

  case 67: /* buttonattribute: layoutwidth  */
#line 197 "myparser.y"
                              {layoutwidth++;}
#line 1770 "myparser.tab.c"
    break;

  case 68: /* $@4: %empty  */
#line 199 "myparser.y"
                                                                    {if ((layoutheight<1)||(layoutwidth<1)||(buttoncount<1)){yyerror2("Missing a layout width, layout height or button count attribute!");}else if((layoutheight>1)||(layoutwidth>1)||(buttoncount>1)){yyerror2("You have placed layout_width, layout_height or button_count attributes more than one time. Please remove the duplicates and try again!");} layoutheight=0; layoutwidth=0; buttoncount=0; if((id>1)||(checkedbutton>1)){yyerror2("You have placed id or checkedbutton attribute more than one time. Please remove the duplicates and try again!");} id=0; checkedbutton=0;}
#line 1776 "myparser.tab.c"
    break;

  case 72: /* radiogroupattribute: id  */
#line 204 "myparser.y"
                        {id++;}
#line 1782 "myparser.tab.c"
    break;

  case 73: /* radiogroupattribute: checkedbutton  */
#line 205 "myparser.y"
                                        {checkedbutton++;}
#line 1788 "myparser.tab.c"
    break;

  case 74: /* radiogroupattribute: layoutheight  */
#line 206 "myparser.y"
                                   {layoutheight++;}
#line 1794 "myparser.tab.c"
    break;

  case 75: /* radiogroupattribute: layoutwidth  */
#line 207 "myparser.y"
                                  {layoutwidth++;}
#line 1800 "myparser.tab.c"
    break;

  case 76: /* radiogroupattribute: buttoncount  */
#line 208 "myparser.y"
                                  {buttoncount++;}
#line 1806 "myparser.tab.c"
    break;

  case 79: /* radiobutton: "less than" "radiobutton" radiobuttonattributes empty  */
#line 213 "myparser.y"
                                                                {if ((layoutheight<1)||(layoutwidth<1)||(text<1)){yyerror2("Missing a layout width, layout height or text attribute!");}else if((layoutheight>1)||(layoutwidth>1)||(text>1)){yyerror2("You have placed layout_width, layout_height or text attributes more than one time. Please remove the duplicates and try again!");} layoutheight=0; layoutwidth=0; text=0; if((radiobuttonid>1)){yyerror2("You have placed id attribute more than one time. Please remove the duplicates and try again!");} radiobuttonid=0;}
#line 1812 "myparser.tab.c"
    break;

  case 82: /* radiobuttonattribute: radiobuttonid  */
#line 218 "myparser.y"
                                      {radiobuttonid++;}
#line 1818 "myparser.tab.c"
    break;

  case 83: /* radiobuttonattribute: layoutheight  */
#line 219 "myparser.y"
                                        {layoutheight++;}
#line 1824 "myparser.tab.c"
    break;

  case 84: /* radiobuttonattribute: layoutwidth  */
#line 220 "myparser.y"
                                       {layoutwidth++;}
#line 1830 "myparser.tab.c"
    break;

  case 85: /* radiobuttonattribute: text  */
#line 221 "myparser.y"
                               {text++;}
#line 1836 "myparser.tab.c"
    break;

  case 86: /* radiogroupend: "less than" "slash" "radiogroup" "greater than"  */
#line 223 "myparser.y"
                                                        {for (int j=0; j<count2; j++){int result4 = strcmp(checkedButton[count3], radioButton[j]); if (result4 == 0){check=1;}} if (check!=1){yyerror2("Attribute checked button must have value same as one of the radio buttons id. Please try again.");} check=0; count3++; if(rbuttoncount!=rbuttonvalue){yyerror2("Attribute button_count must be the same number as the number of RadioButton elements. Please try again.");}rbuttoncount=0; rbuttonvalue=0;}
#line 1842 "myparser.tab.c"
    break;

  case 87: /* progressbar: "less than" "progressbar" progressattributes empty  */
#line 225 "myparser.y"
                                                             {if ((layoutheight<1)||(layoutwidth<1)){yyerror2("Missing a layout width or layout height attribute!");}else if((layoutheight>1)||(layoutwidth>1)){yyerror2("You have placed layout_width or layout_height attributes more than one time. Please remove the duplicates and try again!");} layoutheight=0; layoutwidth=0; if((id>1)||(max>1)||(progress>1)){yyerror2("You have placed id, max or progress attribute more than one time. Please remove the duplicates and try again!");} if (((max==1)&&(progress!=1))||((max!=1)&&(progress==1))){yyerror2("Attributes max and progress must co-exist in the same element."); }id=0; max=0; progress=0; if (Progress>Max){yyerror2("Attribute progress can not be larger than attribute max. Please try again.");} Progress=0; Max=0;}
#line 1848 "myparser.tab.c"
    break;

  case 90: /* progressattribute: id  */
#line 230 "myparser.y"
                      {id++;}
#line 1854 "myparser.tab.c"
    break;

  case 91: /* progressattribute: max  */
#line 231 "myparser.y"
              {max++;}
#line 1860 "myparser.tab.c"
    break;

  case 92: /* progressattribute: progress  */
#line 232 "myparser.y"
                   {progress++;}
#line 1866 "myparser.tab.c"
    break;

  case 93: /* progressattribute: layoutheight  */
#line 233 "myparser.y"
                   {layoutheight++;}
#line 1872 "myparser.tab.c"
    break;

  case 94: /* progressattribute: layoutwidth  */
#line 234 "myparser.y"
                  {layoutwidth++;}
#line 1878 "myparser.tab.c"
    break;

  case 95: /* widthandheight: "alphanumeric"  */
#line 236 "myparser.y"
                             {char* value2 = yytext; int result2 = strcmp(value2, "\"wrap_content\""); int result3 = strcmp(value2,"\"match_parent\"" ); if ((result2!=0)&&(result3!=0)){yyerror2("Attributes layout_width and layout_height can only take values positive integer, \"wrap_content\" and \"match_parent\"!");}}
#line 1884 "myparser.tab.c"
    break;

  case 99: /* id: "android" "colon" "id" "equal" "alphanumeric"  */
#line 242 "myparser.y"
                                        {char* value = yytext; strcpy(idcheck[count], value); for (int i=0; i<count; i++){int result = strcmp(idcheck[i], value); if (result == 0){yyerror2("ID attributes can not have the same value. Please choose different value for the id attribute on this line and try again."); }} count++;}
#line 1890 "myparser.tab.c"
    break;

  case 100: /* radiobuttonid: "android" "colon" "id" "equal" "alphanumeric"  */
#line 244 "myparser.y"
                                                   {char* value = yytext; strcpy(idcheck[count], value); strcpy(radioButton[count2], value); for (int i=0; i<count; i++){int result = strcmp(idcheck[i], value); if (result == 0){yyerror2("ID attributes can not have the same value. Please choose different value for the id attribute on this line and try again."); }} count++; count2++; rbuttoncount++;}
#line 1896 "myparser.tab.c"
    break;

  case 106: /* checkedbutton: "android" "colon" "checkedbutton" "equal" "alphanumeric"  */
#line 256 "myparser.y"
                                                               {char* value = yytext; strcpy(checkedButton[count3], value);}
#line 1902 "myparser.tab.c"
    break;

  case 107: /* max: "android" "colon" "max" "equal" "positive int"  */
#line 258 "myparser.y"
                                          {char* value = yytext; char numericStr[20]; sscanf(value, "\"%[^\"]\"", numericStr); Max = atoi(numericStr);}
#line 1908 "myparser.tab.c"
    break;

  case 108: /* progress: "android" "colon" "progress" "equal" "positive int"  */
#line 260 "myparser.y"
                                                    {char* value = yytext; char numericStr[20]; sscanf(value, "\"%[^\"]\"", numericStr); Progress = atoi(numericStr);}
#line 1914 "myparser.tab.c"
    break;

  case 109: /* buttoncount: "android" "colon" "button count" "equal" "positive int"  */
#line 262 "myparser.y"
                                                           {char* value = yytext; char numericStr[20]; sscanf(value, "\"%[^\"]\"", numericStr); rbuttonvalue = atoi(numericStr);}
#line 1920 "myparser.tab.c"
    break;


#line 1924 "myparser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= T_EOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == T_EOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 264 "myparser.y"


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

