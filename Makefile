# Makefile for compiling a static library and main program

# Compiler to use
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra

# Name of the static library
LIB = libmylib.a

# Source files directory
SRC_DIR = srcs

# Include files directory
INC_DIR = include

# Get all source files from the directory
SRCS = $(wildcard $(SRC_DIR)/*.c)

# Object files
OBJS = $(SRCS:.c=.o)

# Default target
all: $(LIB) main

# Rule to compile source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INC_DIR)

# Rule to create the static library
$(LIB): $(OBJS)
	ar rcs $(LIB) $(OBJS)

# Rule to compile the main program
main: main.c $(LIB)
	$(CC) $(CFLAGS) main.c -o main -L. -lmylib -I$(INC_DIR)

# Clean up intermediate files, the library, and the main program
clean:
	rm -f $(OBJS) $(LIB) main
