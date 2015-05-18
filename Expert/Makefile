CC=gcc

#for include file
INCLUDEDIR=-I ./inc

#for math function
LIBRARYS=-lm

FALGS=-O2 -ansi

#add .c file to implicit
#.SUFFIXS:.c

#find all .c file in current dir.
SOURCES=$(wildcard *.c)

#Using .o instead .c for variable objects
OBJECTS=$(patsubst %.c,%.o,$(SOURCES))

#target ... :dependencies ..
#   command line
#       .
#       .
#       .

#$@ is Target
main.out:$(OBJECTS)
	${CC} $(FALGS) $(OBJECTS) -o $@ $(LIBRARYS)

#$< is first dependency
%.o:%.c
	$(CC) -c $(FALGS) $< $(INCLUDEDIR)

clean:
	rm -f main.out $(OBJECTS)
