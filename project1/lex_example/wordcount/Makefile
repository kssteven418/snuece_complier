wordcount: lex.yy.o
	gcc -o wordcount lex.yy.o -lfl

lex.yy.o: lex.yy.c
	gcc -c -g lex.yy.c

lex.yy.c: wordcount.l
	flex wordcount.l

clean:
	rm lex.yy.c
	rm *.o
	rm wordcount 
