#³¢®Ë¸Û ¸ê¤u¤T 406410114
SHELL = /bin/bashr
CC = g++
CFLAGS = -o
SRC_A!= ls Polygon*.cpp
SRC_B!= ls Polynomial*.cpp
OBJ_A = ${SRC_A:.cpp=.o}
OBJ_B = ${SRC_B:.cpp=.o}
EXEA = HW3_A_Polygon.out
EXEB = HW3_B_Polynomial.out

all: $(EXEA) $(EXEB) 

$(EXEA):$(SRC_A)
	$(CC) $(CFLAGS) $(EXEA) $(SRC_A)

$(EXEB):$(SRC_B)
	$(CC) $(CFLAGS) $(EXEB) $(SRC_B)
 

  
clean:
	rm  -f $(EXEA) $(EXEB)
  
 
 

