all: main.o linkedlist.o
	gcc -o program main.c linkedlist.c
main.o: header.h main.c linkedlist.c
	gcc -c -g main.c
linkedlist.o: linkedlist.c
	gcc -c -g linkedlist.c
run:
	./program
clean:
	rm *.o
	rm *~
