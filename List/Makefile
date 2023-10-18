#############################################################################
# File name:  Makefile
# Author:     chadd williams
# Date:       Sept 1, 2021
# Class:      CS300
# Assignment: 
# Purpose:    
#############################################################################

CFLAGS=-g -Wall

VALGRIND_FLAGS=-v --leak-check=yes --track-origins=yes --leak-check=full\
--show-leak-kinds=all

TARGETS=bin/tinyDB bin/listtester

all: ${TARGETS}

bin/tinyDB: bin/tinyDB.o bin/list.o
	gcc -o bin/tinyDB ${CFLAGS} bin/tinyDB.o bin/list.o

bin/tinyDB.o: src/tinyDB.c include/list.h
	gcc -c -o bin/tinyDB.o ${CFLAGS} src/tinyDB.c

bin/listtester: bin/listtester.o bin/list.o
	gcc -o bin/listtester ${CFLAGS} bin/listtester.o bin/list.o -lm

bin/listtester.o: src/listtester.c include/list.h
	gcc -c -o bin/listtester.o ${CFLAGS} src/listtester.c

bin/list.o: src/list.c include/list.h
	gcc -c -o bin/list.o src/list.c ${CFLAGS}

printAll:
	enscript -C -T 2 -p - -M Letter -Ec --color -fCourier8 src/main.c  | ps2pdf - bin/main.pdf

clean:
	
