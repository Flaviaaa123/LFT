all: yacc lex
	gcc lex.yy.c y.tab.c -o json2xml
yacc: json2xml.y
	yacc -d json2xml.y

lex: json2xml.l
	lex json2xml.l


