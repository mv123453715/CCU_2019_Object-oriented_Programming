SHELL = /bin/bash
CC = g++
CFLAGS = -o

SOURCES!= ls *.cpp
OBJECTS = ${SOURCES:.cpp=.o}

all: ${SOURCES}
	${CC} ${CFLAGS} a.out ${SOURCES}
   
clean:
	rm -f *.o*