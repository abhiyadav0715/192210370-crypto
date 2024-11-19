#include <stdio.h>
#include <ctype.h>
int main() {
    char text[100];
    int k;
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);
    printf("Enter shift (1-25): ");
    scanf("%d", &k);
    for (int i = 0; text[i]; i++) {
        if (isalpha(text[i])) {
            char base = islower(text[i]) ? 'a' : 'A';
            text[i] = (text[i] - base + k) % 26 + base;
        }
    }
    printf("Encrypted: %s\n", text);
    return 0;
}

