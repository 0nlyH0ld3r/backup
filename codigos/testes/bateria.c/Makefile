CC = gcc
LIBS = $(shell pkg-config --libs libnotify)
CFLAGS = -Wall -Wextra -Iheaders -g $(shell pkg-config --cflags libnotify)
SRC = src/*.c
TARGET = battery-checker

all: $(TARGET) compile_commands.json
	@echo "Compilando arquivos:"

$(TARGET): $(SRC)
	@$(CC) $(CFLAGS) $(SRC) -o $(TARGET) $(LIBS)

compile_commands.json: $(TARGET)
	@echo "Gerando compile_commands"
	@make clean
	@bear -- make $(TARGET)

clean: 
	@rm -f $(TARGET)

.PHONY: all clean
