all: hello

hello: main.o describe.o
	cc main.o describe.o -o hello

main.o: main.c
	cc -c main.c

describe.o: describe.c
	cc -c describe.c

clean:
	rm -rf *.o hello
