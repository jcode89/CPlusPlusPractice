CFLAGS=-Wall -g

all: ex1.c
	cc -Wall -g    ex1.c   -o ex1
	cc -Wall -g    ex3.c   -o ex3
clean:
	rm -f ex1
	rm -f ex3
