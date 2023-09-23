#include <stdio.h>

int main() {
    char str[100];

    printf("Введіть строку: ");
    fgets(str);

    printf("Строка в оберненому порядку: ");

    for (int i = strlen(str) - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");

    return 0;
}