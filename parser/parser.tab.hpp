/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

#ifndef YY_YY_PARSER_TAB_HPP_INCLUDED
# define YY_YY_PARSER_TAB_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    TYPE = 259,
    CLASS = 260,
    PROGRAM = 261,
    CHAR_TYPE = 262,
    BOOL_LIT = 263,
    INT_LIT = 264,
    INT = 265,
    BOOL = 266,
    NUM = 267,
    HEX = 268,
    STRING = 269,
    CHAR = 270,
    VOID = 271,
    IF = 272,
    ELSE = 273,
    FOR = 274,
    RETURN = 275,
    BREAK = 276,
    CONTINUE = 277,
    CALLOUT = 278,
    TRUE = 279,
    FALSE = 280,
    LE = 281,
    GE = 282,
    AE = 283,
    SE = 284,
    EQ = 285,
    NEQ = 286,
    AND = 287,
    OR = 288
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 16 "parser.ypp" /* yacc.c:1909  */

	int num;
	char *str;
	class Program *prog;
	class Field_decls *fldds;
	class Fields_decl *fldd;
	class Comma_sep_fields *c_s_fs;
	class Comma_sep_field *c_s_f;
	class Method_decls *m_ds;
	class Method_decl *m_d;
	class Type_plus_ids *t_p_ids;
	class Type_plus_id *t_p_id;
	class Block *blk;
	class Var_decls *v_ds;
	class Var_decl *v_d;
	class IDSS *id_ss;
	class IDS *id_s;
	class Statements *stmts;
	class Statement *stmt;
	class Assignment *asgnmt;
	class Method_call *mthd_call;
	class If_Else *if_else;
	class Iff *iff;
	class Fors *fors;
	class Return *retn;
	class Break *brk;
	class Continue *cntue;
	class Assign_op *asgn_op;
	class Func_call *func_call;
	class Call_out *call_out;
	class Callout_args_plus *C_a_p;
	class Callout_arg *C_a;
	class Location *loc;
	class Expr_plus *expr_p;
	class Expr *expr;
	class Literal *lit;
	class Int_literal *int_lit;
	class Bool_literal *bool_lit;
	class Char_literal *char_lit;
	class Unary_expr *un_expr;
	class Binary_expr *bin_expr;
	class Bracket_expr *brckt_expr;


#line 133 "parser.tab.hpp" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_HPP_INCLUDED  */
