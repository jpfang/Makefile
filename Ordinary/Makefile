CC=gcc

#target ... :dependencies ..
#	command line
#		.
#		.
#		.

#define variable
OBJECTS=main.o print.o

main.out:$(OBJECTS)

	$(CC) $(OBJECTS) -o main.out

#implicit rule
#xxx.o:xxx.c
#
#is the same
#
#xxx.o:xxx.c
#	$(CC) -c xxx.c -o xxx.o

main.o:main.c

print.o:print.c

clean:
	rm -f main.out $(OBJECTS)
