#include <stdio.h>
void affineEncrypt(char text[], int a, int b) {
    for (int i = 0; text[i]; i++) {
        if (text[i] >= 'a' && text[i] <= 'z')
            printf("%c", ((a * (text[i] - 'a') + b) % 26) + 'a');
    }
}

int main() {
    char text[] = "hello";
    affineEncrypt(text, 5, 8); // Example: a = 5, b = 8
    return 0;
}

