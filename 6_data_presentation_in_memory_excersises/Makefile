all: safeadd.out safesubtract.out safemultiply.out safedevide.out 

safeadd.out: safeadd.c safeint.o safeint.h util.h
	gcc safeadd.c safeint.o -o safeadd.out

safesubtract.out: safesubtract.c safeint.o safeint.h util.h
	gcc safesubtract.c safeint.o -o safesubtract.out

safemultiply.out: safemultiply.c safeint.o safeint.h util.h
	gcc safemultiply.c safeint.o -o safemultiply.out 

safedevide.out: safeadd.c safeint.o safeint.h util.h
	gcc safedevide.c safeint.o -o safedevide.out

safeint.o: safeint.c safeint.h 
	gcc -c safeint.c -o safeint.o

clean:
	rm -f *.out *.o