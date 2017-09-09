CC = gcc
CFLAGS = -Wall -pedantic -std=c89 -g
all: dem.o
	${CC} ${CFLAGS} dem.o -o dem
dem.o: dem.c
	${CC} ${CFLAGS} -c dem.c
clean:
	rm *.o dem

