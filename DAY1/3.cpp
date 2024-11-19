#include <stdio.h>
#include <string.h>
#define SIZE 5
void prepareMatrix(char key[], char matrix[SIZE][SIZE]) {
    int flag[26] = {0}, idx = 0;
    char ch;
    for (int i = 0; key[i]; i++) {
        ch = key[i] == 'j' ? 'i' : key[i];
        if (!flag[ch - 'a']) matrix[idx / SIZE][idx++ % SIZE] = ch, flag[ch - 'a'] = 1;
    }
    for (ch = 'a'; ch <= 'z'; ch++) {
        if (!flag[ch - 'a'] && ch != 'j') matrix[idx / SIZE][idx++ % SIZE] = ch;
    }
}
void playfairEncrypt(char pt[], char key[]) {
    char matrix[SIZE][SIZE];
    prepareMatrix(key, matrix);
    printf("Playfair matrix:\n");
    for (int i = 0; i < SIZE; i++) for (int j = 0; j < SIZE; j++) printf("%c ", matrix[i][j]);
}
int main() {
    char plaintext[] = "hello", key[] = "keyword";
    playfairEncrypt(plaintext, key);
    return 0;
}

