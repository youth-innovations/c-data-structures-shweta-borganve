CC = gcc
CFLAGS = -Wall -Wextra -I./include
TARGET = main
TEST_TARGET = test_caesar_cipher

all: $(TARGET)

$(TARGET): src/main.c src/caesar_cipher.c
	$(CC) $(CFLAGS) src/main.c src/caesar_cipher.c -o $(TARGET)

test: $(TEST_TARGET)
	./$(TEST_TARGET)

$(TEST_TARGET): test/test_caesar_cipher.c src/caesar_cipher.c
	$(CC) $(CFLAGS) test/test_caesar_cipher.c src/caesar_cipher.c -o $(TEST_TARGET)

clean:
	rm -f $(TARGET) $(TEST_TARGET)

