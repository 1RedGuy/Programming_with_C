all: help.out strlenght.out strconcat.out strcompare.out 

help.out: help.c mystrings.o mystrings.h
	gcc help.c mystrings.o -o help.out 

mystrings.o: mystrings.c mystrings.h
	gcc -c mystrings.c -o mystrings.o 

strlenght.out: strlenght.c mystrings.o mystrings.h
	gcc strlenght.c mystrings.o -o strlenght.out 

strconcat.out: strconcat.c mystrings.o mystrings.h
	gcc strconcat.c mystrings.o -o strconcat.out 

strcompare.out: strcompare.c mystrings.o mystrings.h
	gcc strcompare.c mystrings.o -o strcompare.out 

clean: 
	rm -f *.out *.o