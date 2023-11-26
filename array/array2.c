#include <stdio.h>

int main() {
    char lowercaseAlphabets[26];
    int i;

    for (i = 0; i < 26; i++) {
        lowercaseAlphabets[i] = 'a' + i;
    }

    for (i = 0; i < 26; i++) {
        lowercaseAlphabets[i] = lowercaseAlphabets[i] - 32;
    }

    printf("Масив у зворотньому порядку: ");
    for (i = 25; i >= 0; i--) {
        printf("%c ", lowercaseAlphabets[i]);
    }

    return 0;