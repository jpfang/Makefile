CC=gcc

#target ... :dependencies ..
#	command line
#		.
#		.
#		.

all: main.o print.o
	$(CC) main.o print.o -o main.out

main.o:
	$(CC) -c main.c -o main.o

print.o:
	$(CC) -c print.c -o print.o

clean:
	rm -f *.o main.out
