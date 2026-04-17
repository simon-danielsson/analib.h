CFLAGS = -Wall -Wextra -std=c11 -pedantic -ggdb -Wno-gnu-zero-variadic-macro-arguments
ROOT   = $(HOME)/dev/c/analib
TESTS  = $(ROOT)/tests
LIB    = $(ROOT)/analib.h

CC = gcc

.PHONY: build run clean

build: $(TESTS)/test

run: build
	$(TESTS)/test

$(TESTS)/test.o: $(TESTS)/test.c $(LIB)
	$(CC) $(CFLAGS) -c $< -o $@

$(TESTS)/test: $(TESTS)/test.o
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(TESTS)/test.o $(TESTS)/test
