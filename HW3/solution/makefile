#³¢®Ë¸Û ¸ê¤u¤T 406410114
SHELL = /bin/bash
CC1 = javac
CC2 = jar
CC3 = g++
CFLAGS1 = -nowarn
CFLAGS2 = -o
SOURCES!= ls *.cpp
OBJECTS = ${SOURCES:.cpp=.o}

all: ${SOURCES} test.java 
	${CC3} ${CFLAGS2} a.out ${SOURCES}
	${CC1} ${CFLAGS1} test.java ./lib/diamond.java
	${CC2} cfe myJar.jar test test.class ./lib/diamond.class


clean:
	rm test.class myJar.jar a.out
 
 
 

