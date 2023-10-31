CC = gcc
CFLAGS = -Wall -Werror -Wextra -g

BUILD_DIR = build
TARGET = $(BUILD_DIR)/main

SOURCES = $(wildcard src/*.c)
HEADERS = $(wildcard src/include/*.h)
OBJECTS = $(patsubst src/%.c, $(BUILD_DIR)/%.o, $(SOURCES))

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^

$(BUILD_DIR)/%.o: src/%.c $(HEADERS)
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -c -o $@ $<

$(BUILD_DIR):
	mkdir -p $@


.PHONY: clean
clean:
	rm -rf $(BUILD_DIR)
