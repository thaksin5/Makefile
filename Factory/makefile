# -- NORMAL WAYS --
# all: execute_file
# execute_file: main.o Toy.o
# 	g++ -std=c++11 main.o Toy.o -o execute_file

# main.o: main.cpp
# 	g++ -c main.cpp -o main.o

# Toy.o: Toy/Toy.cpp Toy/Toy.h
# 	g++ -c Toy/Toy.cpp -o Toy.o

# clean:
# 	rm *.o execute_file


# -- SHORTER VERSION --
CC=g++
CFLAGS=-std=c++11
SRC=main.cpp Toy/Toy.cpp Toy/Toy.h
LEAK=--leak-check=full --error-exitcode=2 --track-origins=yes 
EXE=execute_file

all:$(EXE)

$(EXE): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@

valgrind:
	valgrind $(LEAK)

clean:
	rm -f *.o $(EXE) 