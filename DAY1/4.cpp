#include <stdio.h>
#include <string.h>

void encryptVigenere(char text[], char key[]) {
    int n = strlen(text), m = strlen(key);
    for (int i = 0; i < n; i++) {
        char shift = key[i % m] - 'a';
        printf("%c", 'a' + (text[i] - 'a' + shift) % 26);
    }
}

int main() {
    char text[] = "hello", key[] = "key";
    encryptVigenere(text, key);
    return 0;
}

