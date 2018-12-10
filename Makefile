CC = gcc
CFLAGS = -Wall -Werror

EXECUTABLE = bin/deposit

DIRECTORY = build/src
BUILDDIR = build

all: $(DIRECTORY)/main.o $(DIRECTORY)/deposit.o
	$(CC) $(DIRECTORY)/main.o $(DIRECTORY)/deposit.o -o $(EXECUTABLE)

$(DIRECTORY)/main.o: src/main.c
	mkdir -p build
	mkdir -p build/src
	mkdir -p bin
	$(CC) $(CFLAGS) -c src/main.c -o $(DIRECTORY)/main.o

$(DIRECTORY)/deposit.o: src/deposit.c
	$(CC) $(CFLAGS) -c src/deposit.c -o $(DIRECTORY)/deposit.o

.PHONY: clean

clean:
	rm -rf *.o *.exe bin/* build/src/*.o
