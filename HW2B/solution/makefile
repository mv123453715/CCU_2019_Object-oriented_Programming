#³¢®Ë¸Û ¸ê¤u¤T 406410114
SHELL = /bin/bash
CC1 = javac
CC2 = jar
CC3 = g++
CFLAGS1 = -nowarn
CFLAGS2 = -o
SOURCES!= ls *.cpp
OBJECTS = ${SOURCES:.cpp=.o}

all: ${SOURCES} OOP_HW2B_TASK2_Maximum_Subarray.java
	${CC3} ${CFLAGS2} a.out ${SOURCES}
	${CC1} OOP_HW2B_TASK2_Maximum_Subarray.java ${CFLAGS1}
	${CC2} cfe myJar.jar OOP_HW2B_TASK2_Maximum_Subarray OOP_HW2B_TASK2_Maximum_Subarray.class


clean:
	rm *.class *.jar *.out