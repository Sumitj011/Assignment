CC = g++
CPPFLAGS = -c -Wall
OBJ = obj/
SRC = src/
BIN = bin/
INCLUDE = inc/

all: app

app: $(OBJ)Emp.o 
	$(CC) -o app $(OBJ)Emp.o
	mv app $(BIN)

$(OBJ)Emp.o: $(SRC)Emp.cpp
			$(CC) $(CPPFLAGS) $(SRC)Emp.cpp -I $(INCLUDE)
			mv Emp.o $(OBJ)


clean:
		rm -f a.out app*.o
		rm -f $(OBJ)*.o
		rm -f $(BIN)app
