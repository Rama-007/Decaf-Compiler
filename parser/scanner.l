%{
#include <bits/stdc++.h>
using namespace std;
#include "parser.tab.hpp"
#define YY_DECL extern "C" int yylex()
/*extern union Node yylval;*/
int lineno = 0;
%}

char [ -~]
character   \'{char}\'
delim [ \t]+
string (\\n|\\t|\\'|\\\\|\\\"|[^\\"'])

%%
"class"				{return CLASS;}
"Program"			{return PROGRAM;}
"int"				{yylval.str = strdup(yytext);return TYPE;}
"char"				{yylval.str = strdup(yytext);return TYPE;}
"boolean"			{yylval.str = strdup(yytext);return TYPE;}
"void"				{yylval.str = strdup(yytext);return VOID;}
"if"				{return IF;}
"else"				{return ELSE;}
"for"				{return FOR;}
"return"			{return RETURN;}
"break"				{return BREAK;}
"continue"			{return CONTINUE;}
"callout"			{return CALLOUT;}
"true"				{return TRUE;}
"false"				{return FALSE;}
"+="				{yylval.str = strdup(yytext);return AE;}
"-="				{yylval.str = strdup(yytext);return SE;}
"+"					{yylval.str = strdup(yytext);return '+';}
"-"					{yylval.str = strdup(yytext);return '-';}
"*"					{yylval.str = strdup(yytext);return '*';}
"/"					{yylval.str = strdup(yytext);return '/';}
"%"					{yylval.str = strdup(yytext);return '%';}

"=="				{yylval.str = strdup(yytext);return EQ;}
"="					{yylval.str = strdup(yytext);return '=';}
"!="				{yylval.str = strdup(yytext);return NEQ;}
"!"					{yylval.str = strdup(yytext);return '!';}

"<="				{yylval.str = strdup(yytext);return LE;}
">="				{yylval.str = strdup(yytext);return GE;}
">"					{yylval.str = strdup(yytext);return '>';}
"<"					{yylval.str = strdup(yytext);return '<';}

"&&"				{yylval.str = strdup(yytext);return AND;}
"||"				{yylval.str = strdup(yytext);return OR;}

"("					{return '(';}
")"					{return ')';}
"{"					{return '{';}
"}"					{return '}';}
"["					{return '[';}
"]"					{return ']';}
";"					{return ';';}
","					{return ',';}
[0-9][0-9]*			{yylval.num = atoi(yytext);return INT_LIT;}
\"{string}*\"		{yylval.str = strdup(yytext);return STRING;}
{character}			{yylval.str = strdup(yytext);return CHAR;}	
0[xX][0-9a-fA-F]+	{yylval.num = atoi(yytext);return INT_LIT;}
[a-zA-Z][0-9a-zA-Z]* {yylval.str = strdup(yytext);return ID;}
[ \t]				{ }
{delim}						/* Ignore whitespaces tabs and newlines */
"//".*        				/* Inline comments So Ignore */
\n		     		{++lineno;}
.					{ ; }

%%





