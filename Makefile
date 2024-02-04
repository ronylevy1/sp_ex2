all:connections

connections: main.o librery.a
	gcc -o connections main.o librery.a

main.o: main.c my_mat.h
	gcc -Wall -g -c main.c -o main.o

librery.a: my_mat.o 
	ar -rcs librery.a my_mat.o

my_mat.o: my_mat.c
	gcc -Wall -g -c my_mat.c -o my_mat.o


clean:
	rm -f *.o *.a connections 

.PHONY : all clean
