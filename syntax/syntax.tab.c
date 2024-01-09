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
#line 4 "syntax.y"

#include<unistd.h>
#include<stdio.h>   
#include "syntax.h"
int yylex();

#line 78 "syntax.tab.c"

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

#include "syntax.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_INT = 3,                        /* INT  */
  YYSYMBOL_FLOAT = 4,                      /* FLOAT  */
  YYSYMBOL_TYPE = 5,                       /* TYPE  */
  YYSYMBOL_STRUCT = 6,                     /* STRUCT  */
  YYSYMBOL_RETURN = 7,                     /* RETURN  */
  YYSYMBOL_IF = 8,                         /* IF  */
  YYSYMBOL_ELSE = 9,                       /* ELSE  */
  YYSYMBOL_WHILE = 10,                     /* WHILE  */
  YYSYMBOL_ID = 11,                        /* ID  */
  YYSYMBOL_COMMENT = 12,                   /* COMMENT  */
  YYSYMBOL_SPACE = 13,                     /* SPACE  */
  YYSYMBOL_SEMI = 14,                      /* SEMI  */
  YYSYMBOL_COMMA = 15,                     /* COMMA  */
  YYSYMBOL_ASSIGNOP = 16,                  /* ASSIGNOP  */
  YYSYMBOL_PLUS = 17,                      /* PLUS  */
  YYSYMBOL_MINUS = 18,                     /* MINUS  */
  YYSYMBOL_STAR = 19,                      /* STAR  */
  YYSYMBOL_DIV = 20,                       /* DIV  */
  YYSYMBOL_AND = 21,                       /* AND  */
  YYSYMBOL_OR = 22,                        /* OR  */
  YYSYMBOL_DOT = 23,                       /* DOT  */
  YYSYMBOL_NOT = 24,                       /* NOT  */
  YYSYMBOL_LP = 25,                        /* LP  */
  YYSYMBOL_RP = 26,                        /* RP  */
  YYSYMBOL_LB = 27,                        /* LB  */
  YYSYMBOL_RB = 28,                        /* RB  */
  YYSYMBOL_LC = 29,                        /* LC  */
  YYSYMBOL_RC = 30,                        /* RC  */
  YYSYMBOL_AERROR = 31,                    /* AERROR  */
  YYSYMBOL_RELOP = 32,                     /* RELOP  */
  YYSYMBOL_EOL = 33,                       /* EOL  */
  YYSYMBOL_LOWER_THAN_ELSE = 34,           /* LOWER_THAN_ELSE  */
  YYSYMBOL_YYACCEPT = 35,                  /* $accept  */
  YYSYMBOL_Program = 36,                   /* Program  */
  YYSYMBOL_ExtDefList = 37,                /* ExtDefList  */
  YYSYMBOL_ExtDef = 38,                    /* ExtDef  */
  YYSYMBOL_ExtDecList = 39,                /* ExtDecList  */
  YYSYMBOL_Specifire = 40,                 /* Specifire  */
  YYSYMBOL_StructSpecifire = 41,           /* StructSpecifire  */
  YYSYMBOL_OptTag = 42,                    /* OptTag  */
  YYSYMBOL_Tag = 43,                       /* Tag  */
  YYSYMBOL_VarDec = 44,                    /* VarDec  */
  YYSYMBOL_FunDec = 45,                    /* FunDec  */
  YYSYMBOL_VarList = 46,                   /* VarList  */
  YYSYMBOL_ParamDec = 47,                  /* ParamDec  */
  YYSYMBOL_Compst = 48,                    /* Compst  */
  YYSYMBOL_StmtList = 49,                  /* StmtList  */
  YYSYMBOL_Stmt = 50,                      /* Stmt  */
  YYSYMBOL_DefList = 51,                   /* DefList  */
  YYSYMBOL_Def = 52,                       /* Def  */
  YYSYMBOL_DecList = 53,                   /* DecList  */
  YYSYMBOL_Dec = 54,                       /* Dec  */
  YYSYMBOL_Exp = 55,                       /* Exp  */
  YYSYMBOL_Args = 56                       /* Args  */
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
typedef yytype_int8 yy_state_t;

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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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
#define YYFINAL  11
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   251

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  35
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  22
/* YYNRULES -- Number of rules.  */
#define YYNRULES  59
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  111

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   289


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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int8 yyrline[] =
{
       0,    43,    43,    45,    46,    48,    49,    50,    52,    53,
      56,    57,    59,    60,    62,    63,    65,    68,    69,    71,
      72,    74,    75,    77,    81,    83,    84,    86,    87,    88,
      89,    90,    91,    94,    95,    97,    99,   100,   102,   103,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   125,   126
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "INT", "FLOAT", "TYPE",
  "STRUCT", "RETURN", "IF", "ELSE", "WHILE", "ID", "COMMENT", "SPACE",
  "SEMI", "COMMA", "ASSIGNOP", "PLUS", "MINUS", "STAR", "DIV", "AND", "OR",
  "DOT", "NOT", "LP", "RP", "LB", "RB", "LC", "RC", "AERROR", "RELOP",
  "EOL", "LOWER_THAN_ELSE", "$accept", "Program", "ExtDefList", "ExtDef",
  "ExtDecList", "Specifire", "StructSpecifire", "OptTag", "Tag", "VarDec",
  "FunDec", "VarList", "ParamDec", "Compst", "StmtList", "Stmt", "DefList",
  "Def", "DecList", "Dec", "Exp", "Args", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-48)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-15)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      31,   -48,    -8,    10,   -48,    31,    38,   -48,    -5,     3,
     -48,   -48,   -48,    -3,   -48,    28,   -14,    26,    31,     9,
     -48,    46,    62,    31,   -48,    46,    39,    31,   -48,    46,
      45,    61,   -48,   -48,    50,    43,    -7,    72,    80,   -48,
     -48,    69,   -48,    31,   -48,   -48,   -48,    59,    74,    75,
      76,    59,    59,    59,   -48,    67,    43,    71,    59,   -48,
      46,   -48,    88,    59,    59,    55,   224,    -4,   123,   -48,
     -48,   -48,    59,    59,    59,    59,    59,    59,    59,   101,
      59,    59,   191,   -48,   -48,   140,   157,   -48,   106,    87,
     -48,   191,   224,   224,    -4,    -4,   218,   207,   -48,   174,
      21,    43,    43,    59,   -48,   -48,   105,   -48,   -48,    43,
     -48
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,    10,    15,     0,     2,     4,     0,    11,    16,     0,
      13,     1,     3,    17,     6,     0,     8,     0,    34,     0,
       5,     0,     0,    34,     7,     0,     0,    34,    20,     0,
       0,    22,    17,     9,     0,    26,    38,     0,    36,    12,
      33,    23,    19,     0,    18,    56,    57,     0,     0,     0,
      55,     0,     0,     0,    28,     0,    26,     0,     0,    35,
       0,    21,     0,     0,     0,     0,    49,    50,     0,    24,
      25,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,    37,    29,     0,     0,    52,    59,     0,
      48,    40,    44,    45,    46,    47,    41,    42,    54,     0,
      43,     0,     0,     0,    51,    53,    30,    32,    58,     0,
      31
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -48,   -48,   111,   -48,    96,     2,   -48,   -48,   -48,   -17,
     -48,    89,   -48,   102,    78,   -27,    37,   -48,    58,   -48,
     -47,    27
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     3,     4,     5,    15,    25,     7,     9,    10,    16,
      17,    30,    31,    54,    55,    56,    26,    27,    37,    38,
      57,    89
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      62,    21,     6,     8,    66,    67,    68,     6,    36,    58,
      11,    82,    41,    22,     1,     2,    85,    86,    88,    79,
      22,    29,    19,    80,   -14,    91,    92,    93,    94,    95,
      96,    97,    18,    99,   100,    28,     1,     2,    73,    74,
      75,    76,    20,    36,    79,    29,    45,    46,    80,    13,
      47,    48,    14,    49,    50,    23,    88,    32,    45,    46,
      35,    51,    45,    46,    40,    34,    50,    52,    53,    39,
      50,    42,    23,    51,   106,   107,    43,    51,    44,    52,
      53,    87,   110,    52,    53,    71,    59,    72,    73,    74,
      75,    76,    77,    78,    79,    60,    22,    69,    80,    63,
      64,    65,    84,    81,    72,    73,    74,    75,    76,    77,
      78,    79,    98,   104,   109,    80,    12,    33,    83,    24,
      81,   103,    72,    73,    74,    75,    76,    77,    78,    79,
     108,     0,    61,    80,    70,     0,     0,     0,    81,    72,
      73,    74,    75,    76,    77,    78,    79,     0,     0,    90,
      80,     0,     0,     0,     0,    81,    72,    73,    74,    75,
      76,    77,    78,    79,     0,     0,   101,    80,     0,     0,
       0,     0,    81,    72,    73,    74,    75,    76,    77,    78,
      79,     0,     0,   102,    80,     0,     0,     0,     0,    81,
      72,    73,    74,    75,    76,    77,    78,    79,     0,     0,
       0,    80,   105,     0,     0,     0,    81,    72,    73,    74,
      75,    76,    77,    78,    79,     0,     0,     0,    80,     0,
       0,     0,     0,    81,    73,    74,    75,    76,    77,     0,
      79,     0,     0,     0,    80,    73,    74,    75,    76,    81,
       0,    79,     0,    75,    76,    80,     0,    79,     0,     0,
      81,    80
};

static const yytype_int8 yycheck[] =
{
      47,    15,     0,    11,    51,    52,    53,     5,    25,    16,
       0,    58,    29,    27,     5,     6,    63,    64,    65,    23,
      27,    19,    25,    27,    29,    72,    73,    74,    75,    76,
      77,    78,    29,    80,    81,    26,     5,     6,    17,    18,
      19,    20,    14,    60,    23,    43,     3,     4,    27,    11,
       7,     8,    14,    10,    11,    29,   103,    11,     3,     4,
      23,    18,     3,     4,    27,     3,    11,    24,    25,    30,
      11,    26,    29,    18,   101,   102,    15,    18,    28,    24,
      25,    26,   109,    24,    25,    14,    14,    16,    17,    18,
      19,    20,    21,    22,    23,    15,    27,    30,    27,    25,
      25,    25,    14,    32,    16,    17,    18,    19,    20,    21,
      22,    23,    11,    26,     9,    27,     5,    21,    60,    17,
      32,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     103,    -1,    43,    27,    56,    -1,    -1,    -1,    32,    16,
      17,    18,    19,    20,    21,    22,    23,    -1,    -1,    26,
      27,    -1,    -1,    -1,    -1,    32,    16,    17,    18,    19,
      20,    21,    22,    23,    -1,    -1,    26,    27,    -1,    -1,
      -1,    -1,    32,    16,    17,    18,    19,    20,    21,    22,
      23,    -1,    -1,    26,    27,    -1,    -1,    -1,    -1,    32,
      16,    17,    18,    19,    20,    21,    22,    23,    -1,    -1,
      -1,    27,    28,    -1,    -1,    -1,    32,    16,    17,    18,
      19,    20,    21,    22,    23,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    -1,    32,    17,    18,    19,    20,    21,    -1,
      23,    -1,    -1,    -1,    27,    17,    18,    19,    20,    32,
      -1,    23,    -1,    19,    20,    27,    -1,    23,    -1,    -1,
      32,    27
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,     6,    36,    37,    38,    40,    41,    11,    42,
      43,     0,    37,    11,    14,    39,    44,    45,    29,    25,
      14,    15,    27,    29,    48,    40,    51,    52,    26,    40,
      46,    47,    11,    39,     3,    51,    44,    53,    54,    30,
      51,    44,    26,    15,    28,     3,     4,     7,     8,    10,
      11,    18,    24,    25,    48,    49,    50,    55,    16,    14,
      15,    46,    55,    25,    25,    25,    55,    55,    55,    30,
      49,    14,    16,    17,    18,    19,    20,    21,    22,    23,
      27,    32,    55,    53,    14,    55,    55,    26,    55,    56,
      26,    55,    55,    55,    55,    55,    55,    55,    11,    55,
      55,    26,    26,    15,    26,    28,    50,    50,    56,     9,
      50
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    35,    36,    37,    37,    38,    38,    38,    39,    39,
      40,    40,    41,    41,    42,    42,    43,    44,    44,    45,
      45,    46,    46,    47,    48,    49,    49,    50,    50,    50,
      50,    50,    50,    51,    51,    52,    53,    53,    54,    54,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    56,    56
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     3,     2,     3,     1,     3,
       1,     1,     5,     2,     1,     0,     1,     1,     4,     4,
       3,     3,     1,     2,     4,     2,     0,     2,     1,     3,
       5,     7,     5,     2,     0,     3,     1,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     4,     3,     4,     3,     1,     1,     1,     3,     1
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

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
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
  case 2: /* Program: ExtDefList  */
#line 43 "syntax.y"
                   {(yyval.type_tnode)=newAst("Program",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1218 "syntax.tab.c"
    break;

  case 3: /* ExtDefList: ExtDef ExtDefList  */
#line 45 "syntax.y"
                             {(yyval.type_tnode)=newAst("ExtDefList",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1224 "syntax.tab.c"
    break;

  case 4: /* ExtDefList: %empty  */
#line 46 "syntax.y"
          {(yyval.type_tnode)=newAst("ExtDefList",0,-1);nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1230 "syntax.tab.c"
    break;

  case 5: /* ExtDef: Specifire ExtDecList SEMI  */
#line 48 "syntax.y"
                                    {(yyval.type_tnode)=newAst("ExtDef",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1236 "syntax.tab.c"
    break;

  case 6: /* ExtDef: Specifire SEMI  */
#line 49 "syntax.y"
                        {(yyval.type_tnode)=newAst("ExtDef",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1242 "syntax.tab.c"
    break;

  case 7: /* ExtDef: Specifire FunDec Compst  */
#line 50 "syntax.y"
                                        {(yyval.type_tnode)=newAst("ExtDef",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1248 "syntax.tab.c"
    break;

  case 8: /* ExtDecList: VarDec  */
#line 52 "syntax.y"
                  {(yyval.type_tnode)=newAst("ExtDecList",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1254 "syntax.tab.c"
    break;

  case 9: /* ExtDecList: VarDec COMMA ExtDecList  */
#line 53 "syntax.y"
                                 {(yyval.type_tnode)=newAst("ExtDecList",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1260 "syntax.tab.c"
    break;

  case 10: /* Specifire: TYPE  */
#line 56 "syntax.y"
               {(yyval.type_tnode)=newAst("Specifire",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1266 "syntax.tab.c"
    break;

  case 11: /* Specifire: StructSpecifire  */
#line 57 "syntax.y"
                         {(yyval.type_tnode)=newAst("Specifire",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1272 "syntax.tab.c"
    break;

  case 12: /* StructSpecifire: STRUCT OptTag LC DefList RC  */
#line 59 "syntax.y"
                                            {(yyval.type_tnode)=newAst("StructSpecifire",5,(yyvsp[-4].type_tnode),(yyvsp[-3].type_tnode),(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1278 "syntax.tab.c"
    break;

  case 13: /* StructSpecifire: STRUCT Tag  */
#line 60 "syntax.y"
                    {(yyval.type_tnode)=newAst("StructSpecifire",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1284 "syntax.tab.c"
    break;

  case 14: /* OptTag: ID  */
#line 62 "syntax.y"
          {(yyval.type_tnode)=newAst("OptTag",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1290 "syntax.tab.c"
    break;

  case 15: /* OptTag: %empty  */
#line 63 "syntax.y"
         {(yyval.type_tnode)=newAst("OptTag",0,-1);nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1296 "syntax.tab.c"
    break;

  case 16: /* Tag: ID  */
#line 65 "syntax.y"
       {(yyval.type_tnode)=newAst("Tag",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1302 "syntax.tab.c"
    break;

  case 17: /* VarDec: ID  */
#line 68 "syntax.y"
          {(yyval.type_tnode)=newAst("VarDec",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1308 "syntax.tab.c"
    break;

  case 18: /* VarDec: VarDec LB INT RB  */
#line 69 "syntax.y"
                          {(yyval.type_tnode)=newAst("VarDec",4,(yyvsp[-3].type_tnode),(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1314 "syntax.tab.c"
    break;

  case 19: /* FunDec: ID LP VarList RP  */
#line 71 "syntax.y"
                        {(yyval.type_tnode)=newAst("FunDec",4,(yyvsp[-3].type_tnode),(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1320 "syntax.tab.c"
    break;

  case 20: /* FunDec: ID LP RP  */
#line 72 "syntax.y"
                  {(yyval.type_tnode)=newAst("FunDec",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1326 "syntax.tab.c"
    break;

  case 21: /* VarList: ParamDec COMMA VarList  */
#line 74 "syntax.y"
                               {(yyval.type_tnode)=newAst("VarList",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1332 "syntax.tab.c"
    break;

  case 22: /* VarList: ParamDec  */
#line 75 "syntax.y"
                  {(yyval.type_tnode)=newAst("VarList",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1338 "syntax.tab.c"
    break;

  case 23: /* ParamDec: Specifire VarDec  */
#line 77 "syntax.y"
                          {(yyval.type_tnode)=newAst("ParamDec",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1344 "syntax.tab.c"
    break;

  case 24: /* Compst: LC DefList StmtList RC  */
#line 81 "syntax.y"
                              {(yyval.type_tnode)=newAst("Compst",4,(yyvsp[-3].type_tnode),(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1350 "syntax.tab.c"
    break;

  case 25: /* StmtList: Stmt StmtList  */
#line 83 "syntax.y"
                      {(yyval.type_tnode)=newAst("StmtList",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1356 "syntax.tab.c"
    break;

  case 26: /* StmtList: %empty  */
#line 84 "syntax.y"
          {(yyval.type_tnode)=newAst("StmtList",0,-1);nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1362 "syntax.tab.c"
    break;

  case 27: /* Stmt: Exp SEMI  */
#line 86 "syntax.y"
              {(yyval.type_tnode)=newAst("Stmt",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1368 "syntax.tab.c"
    break;

  case 28: /* Stmt: Compst  */
#line 87 "syntax.y"
                {(yyval.type_tnode)=newAst("Stmt",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1374 "syntax.tab.c"
    break;

  case 29: /* Stmt: RETURN Exp SEMI  */
#line 88 "syntax.y"
                         {(yyval.type_tnode)=newAst("Stmt",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1380 "syntax.tab.c"
    break;

  case 30: /* Stmt: IF LP Exp RP Stmt  */
#line 89 "syntax.y"
                                             {(yyval.type_tnode)=newAst("Stmt",5,(yyvsp[-4].type_tnode),(yyvsp[-3].type_tnode),(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1386 "syntax.tab.c"
    break;

  case 31: /* Stmt: IF LP Exp RP Stmt ELSE Stmt  */
#line 90 "syntax.y"
                                 {(yyval.type_tnode)=newAst("Stmt",7,(yyvsp[-6].type_tnode),(yyvsp[-5].type_tnode),(yyvsp[-4].type_tnode),(yyvsp[-3].type_tnode),(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1392 "syntax.tab.c"
    break;

  case 32: /* Stmt: WHILE LP Exp RP Stmt  */
#line 91 "syntax.y"
                              {(yyval.type_tnode)=newAst("Stmt",5,(yyvsp[-4].type_tnode),(yyvsp[-3].type_tnode),(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1398 "syntax.tab.c"
    break;

  case 33: /* DefList: Def DefList  */
#line 94 "syntax.y"
                   {(yyval.type_tnode)=newAst("DefList",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1404 "syntax.tab.c"
    break;

  case 34: /* DefList: %empty  */
#line 95 "syntax.y"
          {(yyval.type_tnode)=newAst("DefList",0,-1);nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1410 "syntax.tab.c"
    break;

  case 35: /* Def: Specifire DecList SEMI  */
#line 97 "syntax.y"
                           {(yyval.type_tnode)=newAst("Def",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1416 "syntax.tab.c"
    break;

  case 36: /* DecList: Dec  */
#line 99 "syntax.y"
            {(yyval.type_tnode)=newAst("DecList",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1422 "syntax.tab.c"
    break;

  case 37: /* DecList: Dec COMMA DecList  */
#line 100 "syntax.y"
                           {(yyval.type_tnode)=newAst("DecList",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1428 "syntax.tab.c"
    break;

  case 38: /* Dec: VarDec  */
#line 102 "syntax.y"
           {(yyval.type_tnode)=newAst("Dec",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1434 "syntax.tab.c"
    break;

  case 39: /* Dec: VarDec ASSIGNOP Exp  */
#line 103 "syntax.y"
                             {(yyval.type_tnode)=newAst("Dec",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1440 "syntax.tab.c"
    break;

  case 40: /* Exp: Exp ASSIGNOP Exp  */
#line 106 "syntax.y"
                    {(yyval.type_tnode)=newAst("Exp",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1446 "syntax.tab.c"
    break;

  case 41: /* Exp: Exp AND Exp  */
#line 107 "syntax.y"
                    {(yyval.type_tnode)=newAst("Exp",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1452 "syntax.tab.c"
    break;

  case 42: /* Exp: Exp OR Exp  */
#line 108 "syntax.y"
                   {(yyval.type_tnode)=newAst("Exp",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1458 "syntax.tab.c"
    break;

  case 43: /* Exp: Exp RELOP Exp  */
#line 109 "syntax.y"
                      {(yyval.type_tnode)=newAst("Exp",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1464 "syntax.tab.c"
    break;

  case 44: /* Exp: Exp PLUS Exp  */
#line 110 "syntax.y"
                     {(yyval.type_tnode)=newAst("Exp",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1470 "syntax.tab.c"
    break;

  case 45: /* Exp: Exp MINUS Exp  */
#line 111 "syntax.y"
                      {(yyval.type_tnode)=newAst("Exp",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1476 "syntax.tab.c"
    break;

  case 46: /* Exp: Exp STAR Exp  */
#line 112 "syntax.y"
                     {(yyval.type_tnode)=newAst("Exp",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1482 "syntax.tab.c"
    break;

  case 47: /* Exp: Exp DIV Exp  */
#line 113 "syntax.y"
                    {(yyval.type_tnode)=newAst("Exp",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1488 "syntax.tab.c"
    break;

  case 48: /* Exp: LP Exp RP  */
#line 114 "syntax.y"
                  {(yyval.type_tnode)=newAst("Exp",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1494 "syntax.tab.c"
    break;

  case 49: /* Exp: MINUS Exp  */
#line 115 "syntax.y"
                   {(yyval.type_tnode)=newAst("Exp",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1500 "syntax.tab.c"
    break;

  case 50: /* Exp: NOT Exp  */
#line 116 "syntax.y"
                 {(yyval.type_tnode)=newAst("Exp",2,(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1506 "syntax.tab.c"
    break;

  case 51: /* Exp: ID LP Args RP  */
#line 117 "syntax.y"
                       {(yyval.type_tnode)=newAst("Exp",4,(yyvsp[-3].type_tnode),(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1512 "syntax.tab.c"
    break;

  case 52: /* Exp: ID LP RP  */
#line 118 "syntax.y"
                  {(yyval.type_tnode)=newAst("Exp",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1518 "syntax.tab.c"
    break;

  case 53: /* Exp: Exp LB Exp RB  */
#line 119 "syntax.y"
                       {(yyval.type_tnode)=newAst("Exp",4,(yyvsp[-3].type_tnode),(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1524 "syntax.tab.c"
    break;

  case 54: /* Exp: Exp DOT ID  */
#line 120 "syntax.y"
                    {(yyval.type_tnode)=newAst("Exp",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1530 "syntax.tab.c"
    break;

  case 55: /* Exp: ID  */
#line 121 "syntax.y"
            {(yyval.type_tnode)=newAst("Exp",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1536 "syntax.tab.c"
    break;

  case 56: /* Exp: INT  */
#line 122 "syntax.y"
             {(yyval.type_tnode)=newAst("Exp",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1542 "syntax.tab.c"
    break;

  case 57: /* Exp: FLOAT  */
#line 123 "syntax.y"
              {(yyval.type_tnode)=newAst("Exp",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1548 "syntax.tab.c"
    break;

  case 58: /* Args: Exp COMMA Args  */
#line 125 "syntax.y"
                    {(yyval.type_tnode)=newAst("Args",3,(yyvsp[-2].type_tnode),(yyvsp[-1].type_tnode),(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1554 "syntax.tab.c"
    break;

  case 59: /* Args: Exp  */
#line 126 "syntax.y"
             {(yyval.type_tnode)=newAst("Args",1,(yyvsp[0].type_tnode));nodeList[nodeNum]=(yyval.type_tnode);nodeNum++;}
#line 1560 "syntax.tab.c"
    break;


#line 1564 "syntax.tab.c"

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
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
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

  return yyresult;
}

#line 128 "syntax.y"

