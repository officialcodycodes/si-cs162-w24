CC=g++
EXE_FILE = prog

all: $(EXE_FILE)

$(EXE_FILE): application.cpp shape.o rectangle.o circle.o square.o
	$(CC) application.cpp shape.o rectangle.o circle.o square.o -o $(EXE_FILE)

rectangle.o: rectangle.h rectangle.cpp
	$(CC) -c rectangle.cpp

circle.o: circle.h circle.cpp
	$(CC) -c circle.cpp

square.o: square.h square.cpp
	$(CC) -c square.cpp

clean:
	rm -f *.o $(EXE_FILE)