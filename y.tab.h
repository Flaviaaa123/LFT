/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    PLUSOP = 258,                  /* PLUSOP  */
    ASSIGNOP = 259,                /* ASSIGNOP  */
    OPB = 260,                     /* OPB  */
    CMM = 261,                     /* CMM  */
    CLB = 262,                     /* CLB  */
    OPENBRACES = 263,              /* OPENBRACES  */
    CLOSEBRACES = 264,             /* CLOSEBRACES  */
    COLON = 265,                   /* COLON  */
    MINUS = 266,                   /* MINUS  */
    PLUS = 267,                    /* PLUS  */
    NAIL = 268,                    /* NAIL  */
    DOT = 269,                     /* DOT  */
    CHARR = 270,                   /* CHARR  */
    VAR = 271,                     /* VAR  */
    NUM = 272,                     /* NUM  */
    TR = 273,                      /* TR  */
    FLS = 274,                     /* FLS  */
    INT = 275,                     /* INT  */
    DOUBLE = 276                   /* DOUBLE  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define PLUSOP 258
#define ASSIGNOP 259
#define OPB 260
#define CMM 261
#define CLB 262
#define OPENBRACES 263
#define CLOSEBRACES 264
#define COLON 265
#define MINUS 266
#define PLUS 267
#define NAIL 268
#define DOT 269
#define CHARR 270
#define VAR 271
#define NUM 272
#define TR 273
#define FLS 274
#define INT 275
#define DOUBLE 276

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 45 "json2xml.y"

char *string;

#line 113 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
