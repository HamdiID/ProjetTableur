prog: main.o liste.o
	gcc main.o liste.o -o prog 

main.o: main.c liste.h
	gcc -c main.c

liste.o: liste.c liste.h
	gcc -c liste.c

clean:
	rm *-o