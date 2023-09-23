#include <stdio.h>

int main() {
    char c;

    printf("Введіть строку: ");

    while ((c = getchar()) != '\n' && c != EOF) {
        main();
        putchar(c);
    }

    return 0;
}