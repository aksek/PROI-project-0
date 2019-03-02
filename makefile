
CC := g++
CFLAGS := -g -Wall
TARGET := bin/runner

$(TARGET) : build/SumOfTwoNumbers.o
	$(CC) $(CFLAGS) build/SumOfTwoNumbers.o -o $(TARGET)
	
build/SumOfTwoNumbers.o : src/SumOfTwoNumbers.cpp
	$(CC) $(CFLAGS) -c src/SumOfTwoNumbers.cpp -o build/SumOfTwoNumbers.o
	
clean:
	rm -r build/*
	
.PHONY: clean