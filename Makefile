CC = gcc
CFLAGS = -Wall -Werror
TESTFLAGS = -I src -I thirdparty -Wall -Werror

EXECUTABLE = bin/deposit
EXECUTABLE_TESTS = bin/test

DIRECTORY = build/src
DIRECTORY_TEST = build/test
BUILDDIR = build

all: $(DIRECTORY)/main.o $(DIRECTORY)/deposit.o
	$(CC) $(DIRECTORY)/main.o $(DIRECTORY)/deposit.o -o $(EXECUTABLE)

$(DIRECTORY)/main.o: src/main.c
	mkdir -p build
	mkdir -p build/test
	mkdir -p build/src
	mkdir -p bin
	$(CC) $(CFLAGS) -c src/main.c -o $(DIRECTORY)/main.o

$(DIRECTORY)/deposit.o: src/deposit.c
	$(CC) $(CFLAGS) -c src/deposit.c -o $(DIRECTORY)/deposit.o

all: DEPOSIT_TEST

DEPOSIT_TEST: $(DIRECTORY)/deposit.o $(DIRECTORY_TEST)/main.o $(DIRECTORY_TEST)/deposit_test.o $(DIRECTORY_TEST)/validation_test.o
	$(CC) $(DIRECTORY)/deposit.o $(DIRECTORY_TEST)/main.o $(DIRECTORY_TEST)/deposit_test.o $(DIRECTORY_TEST)/validation_test.o -o $(EXECUTABLE_TESTS)

$(DIRECTORY_TEST)/main.o: test/main.c
	$(CC) $(TESTFLAGS) -c test/main.c -o $(DIRECTORY_TEST)/main.o

$(DIRECTORY_TEST)/deposit_test.o: test/deposit_test.c
	$(CC) $(TESTFLAGS) -c test/deposit_test.c -o $(DIRECTORY_TEST)/deposit_test.o

$(DIRECTORY_TEST)/validation_test.o: test/validation_test.c
	$(CC) $(TESTFLAGS) -c test/validation_test.c -o $(DIRECTORY_TEST)/validation_test.o

.PHONY: clean

clean:
	rm -rf *.o *.exe bin/* build/src/*.o build/test/*.o
