CC=g++
CFLAGS=-lncurses -std=c++1y -Wall

compiled: main.cpp
	$(CC) -o compiled main.cpp $(CFLAGS)

.PHONY: clean

clean:
	rm compiled 
