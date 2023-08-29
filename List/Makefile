#############################################################################
# File name:  Makefile
# Author:     chadd williams
# Date:       Sept 1, 2021
# Class:      CS300
# Assignment: 
# Purpose:    
#############################################################################

CFLAGS=-g -Wall
VALGRIND_FLAGS=-v --leak-check=yes --track-origins=yes --leak-check=full --show-leak-kinds=all
TARGETS=bin/tinyDB bin/listdriverpublic
all: bin ${TARGETS}


bin:
	mkdir -p bin

bin/tinyDB: bin bin/tinyDB.o bin/list.o
	gcc -o bin/tinyDB ${CFLAGS} bin/tinyDB.o bin/list.o

bin/tinyDB.o: src/tinyDB.c include/list.h
	gcc -c -o bin/tinyDB.o ${CFLAGS} src/tinyDB.c

bin/listdriverpublic: bin bin/listdriverpublic.o bin/list.o
	gcc -o bin/listdriverpublic ${CFLAGS} bin/listdriverpublic.o bin/list.o

bin/listdriverpublic.o: src/listdriverpublic.c include/list.h
	gcc -c -o bin/listdriverpublic.o ${CFLAGS} src/listdriverpublic.c

bin/list.o: src/list.c include/list.h
	gcc -c -o bin/list.o src/list.c ${CFLAGS}

printAll:
	enscript -C -T 2 -p - -M Letter -Ec --color -fCourier8 src/main.c  | ps2pdf - bin/main.pdf

clean:
	rm -f ${TARGETS} bin/*.o bin/*.pdf
