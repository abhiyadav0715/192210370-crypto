#include <stdio.h>
#include <string.h>
#include <ctype.h>
void encrypt(char text[], char key[]) {
    for (int i = 0; text[i]; i++) {
        if (isalpha(text[i])) {
            char base = islower(text[i]) ? 'a' : 'A';
            text[i] = key[text[i] - base] + (islower(text[i]) ? 0 : ('A' - 'a'));
        }
    }
}
int main() {
    char text[100], key[27];
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);
    printf("Enter 26-letter key: ");
    scanf("%s", key);
    encrypt(text, key);
    printf("Encrypted: %s\n", text);
    return 0;
}

