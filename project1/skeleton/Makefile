subc: lex.yy.o hash.o
	gcc -o subc lex.yy.o hash.o -lfl

lex.yy.o: lex.yy.c
	gcc -c -g lex.yy.c

lex.yy.c: subc.l
	flex subc.l

hash.o: hash.c subc.h
	gcc -c -g hash.c

clean:
	rm lex.yy.c
	rm *.o
	rm subc
