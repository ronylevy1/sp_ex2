all:connections

connections: my_graph.o librery.a
	gcc -o connections my_graph.o librery.a

my_graph.o: my_graph.c my_mat.h
	gcc -Wall -g -c my_graph.c -o my_graph.o

librery.a: my_mat.o 
	ar -rcs librery.a my_mat.o

my_mat.o: my_mat.c
	gcc -Wall -g -c my_mat.c -o my_mat.o


clean:
	rm -f *.o *.a connections 

.PHONY : all clean
