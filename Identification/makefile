CC = gcc
CFLAGS = -Wall -Wextra -std=c99
LDFLAGS =

TARGET = main
SOURCES = main.c Identification.c
HEADERS = Identification.h
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $(TARGET)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

.PHONY: all clean
