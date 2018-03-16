myprog1: prog1.o kelet.o pelet.o sum3.o data.h
	gcc -g -Wall -ansi prog1.o kelet.o pelet.o sum3.o   -o myprog1 -lm
prog1.o: prog1.c data.h
	gcc -c -Wall  prog1.c -o prog1.o
kelet.o: kelet.c data.h
	gcc -c -Wall  kelet.c -o kelet.o	
pelet.o: pelet.c data.h
	gcc -c -Wall  pelet.c -o pelet.o
sum3.o: sum3.c data.h
	gcc -c -Wall sum3.c -o sum3.o	-lm