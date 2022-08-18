CFLAGS = -g
CC = gcc

all: main app.o

main: app.o
	$(CC) -o main $^ $(CFLAGS) -Wall -Wextra

app.o: app.c
	$(CC) -c $^ -o app.o

.PHONY: clean

clean:
	rm -rf app.o main