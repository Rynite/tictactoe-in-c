CFLAGS = -g
CC = gcc

NAME = main

all: $(NAME) app.o

$(NAME): app.o
	$(CC) -o $@ $^ $(CFLAGS) $(LDFLAGS) -Wall -Wextra

app.o: app.c
	$(CC) -c $^ -o $@

.PHONY: clean

clean:
	rm -rf app.o $(NAME)