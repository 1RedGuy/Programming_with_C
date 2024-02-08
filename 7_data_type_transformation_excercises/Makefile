all: main.out

main.out: main.c quadraticroots.o
	gcc main.c quadraticroots.o -o main.out  -lm

quadraticroots.o: quadraticroots.c quadraticroots.h
	gcc -c quadraticroots.c -o quadraticroots.o 

clean: 
	rm -f *.out *.o