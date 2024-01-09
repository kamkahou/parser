/*第一部分 头文件和变量*/
%{
	#include <stdlib.h>
	#include <stdio.h>
	FILE* f;
	int i;
	int comment_flag;
	int comment_begin;
%}

/*flex属性,记录符号所在行号*/
%option yylineno

/*第二部分 定义正则表达式*/
/*十进制*/
INT         0|[1-9][0-9]*
/*八进制*/
INT_OCT     0[1-7][0-7]*
/*十六进制*/
INT_HEX     0[xX][a-fA-F0-9]+
/*二进制*/
INT_BIN     0[bB][01]+
/*浮点数*/
FLOAT       {INT}\.[0-9]+
/*科学计数法*/
SCIENCE     (([0-9]+\.[0-9]*)|([0-9]*\.[0-9]+)|INT)[Ee][-+]?[0-9]+
NUMBER		{INT_HEX}|{INT}|{INT_OCT}|{INT_BIN}|{SCIENCE}|{FLOAT}

/*十六进制错误*/
INT_HEX_ERROR   0[xX][a-fA-F0-9]*[g-zG-Z]+[a-fA-F0-9]*
/*八进制错误*/
INT_OCT_ERROR   0[0-7]*[89]+[0-7]*
/*二进制错误*/
INT_BIN_ERROR   0[bB][01]*[2-9]+[01]*
/*数组错误*/
ARRAY_ERROR		{ID}{LB}{INT}(,{INT})+{RB}

/*标识符*/
ID          [a-z_A-Z][a-z_A-Z0-9]*
/*关键字*/
STRUCT      struct
RETURN      return
IF          if
ELSE        {SPACE}*else
WHILE       while
TYPE        int|float
/*标点*/
SEMI        ;
COMMA       ,
/*运算*/
ASSIGNOP    =
RELOP       >|<|>=|<=|==|!=
PLUS        \+
MINUS       \-
STAR        \*
DIV         \/
AND         &&
OR          \|\|
DOT         \.
NOT         \!
/*括号*/
LP          \(
RP          \)
LB          \[
RB          \]
LC          \{
RC          \}

/*注释*/
COMMENT         ("//".*)|("/*"([*]*(([^*/])+([/])*)*)*"*/")
COMMENT_BEGIN   "/*"
/*空白符*/
SPACE           [ \f\n\r\t\v]+
/*未定义字符*/
AERROR          .

%%
 /*第三部分 操作 action 这里面的注释必须顶格一个空格*/
 /*跳过空白和注释*/
{SPACE} {}
{COMMENT} {}
{COMMENT_BEGIN} {
	comment_flag = 1;
	comment_begin = yylineno;}
 /*未终结注释错误*/
<<EOF>> {
	if(comment_flag == 1){
		printf("UNTERMINATED_COMMENT at line %d\n",yylineno);
		comment_flag = 0;}
	yyterminate();
}
 /*关键字*/
{TYPE} |
{STRUCT} |
{RETURN} |
{IF} {}
{ELSE} {if(comment_flag!=1) printf("Error type B at line %d: not correct '%s'\n",yylineno,yytext);}
{WHILE} {}
 /*数字类型错误*/
{INT_HEX_ERROR} {if(comment_flag!=1) printf("INT_HEX_ERROR at line %d: charachters \"%s\"\n",yylineno,yytext);}
{INT_OCT_ERROR} {if(comment_flag!=1) printf("INT_OCT_ERROR at line %d: charachters \"%s\"\n",yylineno,yytext);}
{INT_BIN_ERROR} {if(comment_flag!=1) printf("INT_BIN_ERROR at line %d: charachters \"%s\"\n",yylineno,yytext);}
 /*数字类型表示*/
{NUMBER} {}
 /*标点*/
{SEMI} |
{COMMA} {}
 /*运算符*/
{ASSIGNOP} |
{RELOP} |
{PLUS} |
{MINUS} |
{STAR} |
{DIV} |
{AND} |
{OR} |
{DOT} |
{NOT} {}
 /*括号*/
{LP} |
{RP} |
{LB} |
{RB} |
{LC} |
{RC} {}
 /*标识符*/
{ID} {}
 /*错误*/
{AERROR} {if(comment_flag!=1) printf("Error type A at line %d: Mysterious charachter '%s'\n",yylineno,yytext);}
{ARRAY_ERROR} {if(comment_flag!=1) printf("Error type B at line %d: not correct '%s'\n",yylineno,yytext);}

%%
/*第四部分 函数 function*/
int main(int argc,char** argv){
	if(argc<2){
		/*由lex创建的扫描程序的入口点yylex()
		调用yylex()启动或者重新开始扫描。
		如果lex动作执行讲数值传递给调用的程序return,那么对yylex()的下次调用就从它的停止地方继续。*/
		yylex();
		return 0;
	}
	for(i=1;i<argc;i++){
		f=fopen(argv[i],"r");
		if(!f){
			/*C 库函数 void perror(const char *str) 
			把一个描述性错误消息输出到标准错误 stderr。
			首先输出字符串 str，后跟一个冒号，然后是一个空格。*/
			perror(argv[i]);
			return 1;
		}
		comment_flag = 0;
		/*yyrestart使词法分析器从f中读取标准输入文件*/
        yyrestart(f);
        yylex();
        fclose(f);
	}
	return 0;
}

int yywrap()
{
	/*此函数必须由用户提供,或者声明 %option noyywrap
	当词法分析程序遇到文件结尾时，它调用例程yywrap()来找出下一步要做什么
	如果返回0，扫描程序继续扫描，如果返回1，扫描程序就返回报告文件结尾*/
    return 1;
}
