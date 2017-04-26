CC=gcc
CFLAGS=-Wall -Werror
EXECUTABLE=bin/prog_out

SRC_BUILD_DIR=build/
SRC_DIR=src/

all: makedir compile

makedir:
	mkdir -p bin build/

compile: $(SRC_BUILD_DIR)/main.o $(SRC_BUILD_DIR)/deposit.o
	$(CC) $(SRC_BUILD_DIR)/main.o $(SRC_BUILD_DIR)/deposit.o -o $(EXECUTABLE)

$(SRC_BUILD_DIR)/main.o: $(SRC_DIR)/main.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/main.c -o $(SRC_BUILD_DIR)/main.o

$(SRC_BUILD_DIR)/deposit.o: $(SRC_DIR)/deposit.c
	$(CC) $(CFLAGS) -c $(SRC_DIR)/deposit.c -o $(SRC_BUILD_DIR)/deposit.o

.fone clean:
	rm -rf build/ bin/
