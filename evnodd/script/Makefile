CC = g++
LFLAGS= -o
CFLAG= -c -g -Wall -Werror
OBJ = ./obj
SRC = ./src
BIN = ./bin
INCLUDE =./inc
all: app

app: $(OBJ)test.o
		$(CC) $(LFLAGS) $(BIN)test $(OBJ)test.o

$(OBJ)test.o: $(SRC)test.cpp
		$(CC) $(CPPFLAGS) $(IFLAG) $(SRC)test.cpp 
		mv *.o $(OBJ)


clean:
		@echo "Cleaning the project"
		rm -f a.out test
		rm -f *.o
		rm -f $(OBJ)*.o
		rm -f $(BIN)test
		@echo "Done!"

