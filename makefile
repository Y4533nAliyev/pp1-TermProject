CC = gcc
CFLAGS = -Wall -Wextra -Iinclude -lm

# Point wildcard to the src directory
SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:.c=.o)
TARGET = my_program

$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)

# Compiles src/file.c into src/file.o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)
