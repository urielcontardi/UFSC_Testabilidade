CC = gcc
CFLAGS = -Wall -Wextra -std=c99
LDFLAGS =

TARGET = main
SOURCES = main.c FSM_Dimmer.c
HEADERS = FSM_Dimmer.h
OBJECTS = $(SOURCES:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $(TARGET)

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(TARGET)

.PHONY: all clean
