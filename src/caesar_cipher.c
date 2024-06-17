#include "caesar_cipher.h"
#include <ctype.h>
#include <string.h>
void caesar_encrypt(char *message, int key) {
    int i = 0;
    char c;
    
    while (message[i] != '\0') {
        c = message[i];

        if (isalpha(c)) {
            char base = islower(c)? 'a' : 'A';

            message[i] = (c - base + key) % 26 + base;
        }

        i++;

    }
    return;
}

void caesar_decrypt(char *message, int key) {
    int i = 0;
    char c;

    while (message[i] != '\0') {
        c = message[i];

        if (isalpha(c)) {
            char base = islower(c)? 'a' : 'A';
            message[i] = (c - base - key) % 26 + base;
        }
        i++;
    }
    
    return;
}

