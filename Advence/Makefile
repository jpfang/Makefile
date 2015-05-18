CC=gcc

#for include file
INCLUDEDIR=./inc

#for math function
LIBRARYS=-lm

FALGS=-O2 -ansi

#find all .c file in current dir.
SOURCES=$(wildcard *.c)

#Using .o instead .c for variable objects
OBJECTS=$(patsubst %.c,%.o,$(SOURCES))

#target ... :dependencies ..
#   command line
#       .
#       .
#       .

main.out:$(OBJECTS)
	$(CC) $(FALGS) $(OBJECTS) -o main.out $(LIBRARYS)

main.o:
	$(CC) -c $(FALGS) main.c -I $(INCLUDEDIR)

print.o:
	$(CC) -c $(FALGS) print.c -I $(INCLUDEDIR)

loop.o:
	$(CC) -c $(FALGS) loop.c -I $(INCLUDEDIR)

clean:
	rm -f main.out $(OBJECTS)
