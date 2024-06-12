#include <stdio.h>
#include <string.h>
#include "caesar_cipher.h"

int main() {
    char message[100]; // Assuming max input size is 100 characters
    int key, choice;

    while (1) {
        printf("\nCaesar Cipher\n");
        printf("1. Encrypt\n");
        printf("2. Decrypt\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter message to encrypt: ");
                scanf(" %[^\n]", message);
                printf("Enter key: ");
                scanf("%d", &key);
                caesar_encrypt(message, key);
                printf("Encrypted message: %s\n", message);
                break;
            case 2:
                printf("Enter message to decrypt: ");
                scanf(" %[^\n]", message);
                printf("Enter key: ");
                scanf("%d", &key);
                caesar_decrypt(message, key);
                printf("Decrypted message: %s\n", message);
                break;
            case 0:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

