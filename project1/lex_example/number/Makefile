number: lex.yy.o
	gcc -o number lex.yy.o -lfl

lex.yy.o: lex.yy.c
	gcc -c -g lex.yy.c

lex.yy.c: number.l
	flex number.l

clean:
	rm lex.yy.c
	rm *.o
	rm number 
