CC = gcc
CFLAGS = -Wall -Wextra -Iheaders
SRC = src/*.c
TARGET = battery-checker

all: $(TARGET) compile_commands.json
	@echo "Compilando arquivos:"

$(TARGET): $(SRC)
	@$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

compile_commands.json: $(TARGET)
	@echo "Gerando compile_commands"
	@make clean
	@bear -- make $(TARGET)

clean: 
	@rm -f $(TARGET)

.PHONY: all clean
