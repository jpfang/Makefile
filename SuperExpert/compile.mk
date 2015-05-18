CROSSCOMPILE=
CC=gcc
STRIP=strip

#for project dir.
PROJECTDIR=$(PWD)

#for include file
INCLUDEDIR=-I ./inc
 
#for Library file
LIBRARYDIR=-L ./

#for math function
LIBRARYS=-lm

#define compile parameters
#:= and = is the same
FALGS:=-O2 -ansi -Wall

#we can add a new parameter
FALGS+=-g

#Set Install Dir
INSTALLDIR=./bin

#Set Target
EXEBINARY=main.out
STRIPEXEBINARY=main
