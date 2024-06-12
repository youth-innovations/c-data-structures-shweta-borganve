#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "../include/caesar_cipher.h"

int main() {
    char message[] = "Hello, World!";
    char encrypted_message[100]; // Assuming max input size is 100 characters
    char decrypted_message[100]; // Assuming max input size is 100 characters
    int key = 3;

    // Test encryption
    strcpy(encrypted_message, message); // Copy the original message to encrypted_message
    caesar_encrypt(encrypted_message, key);
    printf("Encrypted message: %s\n", encrypted_message);
    assert(strcmp(encrypted_message, "Khoor, Zruog!") == 0); // Assert the encrypted message

    // Test decryption
    strcpy(decrypted_message, encrypted_message); // Copy the encrypted message to decrypted_message
    caesar_decrypt(decrypted_message, key);
    printf("Decrypted message: %s\n", decrypted_message);
    assert(strcmp(decrypted_message, message) == 0); // Assert the decrypted message

    printf("All tests passed!\n");

    return 0;
}

