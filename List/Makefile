#############################################################################
# File name:  Makefile
# Author:     chadd williams
# Date:       Sept 1, 2021
# Class:      CS300
# Assignment: 
# Purpose:    
#############################################################################

CC=clang
CFLAGS=-g -Wall
VALGRIND_FLAGS=-v --leak-check=yes --track-origins=yes --leak-check=full \
--show-leak-kinds=all
ENSCRIPT_FLAGS=-C -T 2 -p - -M Letter --color -fCourier8

TARGETS=bin/tinyDB bin/listtester

all: ${TARGETS}

bin/tinyDB: bin/tinyDB.o bin/list.o
	${CC} -o bin/tinyDB ${CFLAGS} bin/tinyDB.o bin/list.o

bin/tinyDB.o: src/tinyDB.c include/list.h
	${CC} -c -o bin/tinyDB.o ${CFLAGS} src/tinyDB.c

bin/listtester: bin/listtester.o bin/list.o bin/driverUtil.o
	${CC} -o bin/listtester ${CFLAGS} bin/listtester.o bin/list.o \
	bin/driverUtil.o -lm

bin/listtester.o: src/listtester.c include/list.h
	g${CC}cc -c -o bin/listtester.o ${CFLAGS} src/listtester.c

bin/list.o: src/list.c include/list.h
	${CC} -c -o bin/list.o src/list.c ${CFLAGS}

bin/driverUtil.o: src/driverUtil.c include/driverUtil.h
	${CC} ${CFLAGS} -c -o bin/driverUtil.o src/driverUtil.c 

printAll:
	enscript -C -T 2 -p - -M Letter -Ec --color -fCourier8 src/main.c  | ps2pdf - bin/main.pdf

clean:
	
