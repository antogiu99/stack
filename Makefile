CC = gcc
PROG = stack

default: link

link: compile
	$(CC) -o $(PROG) funzioni.c stack.c

compile:
	$(CC) -c funzioni.c stack.c stack.h

clean:
	@ rm *.o

run:
	./$(PROG)
