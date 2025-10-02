CC = gcc

CFLAGS = -Wall -Wextra -std=c99

EXEC = gestion_listes

SRCS = main.c listes.c

OBJS = $(SRCS:.c=.o)

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) -o $(EXEC) $(OBJS)

main.o: main.c listes.h
listes.o: listes.c listes.h

run: all
	./$(EXEC)

clean:
	rm -f $(OBJS) $(EXEC)
