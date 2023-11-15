#include <stdio.h>
#include <stdlib.h>

int main() {

    int myArray[10];

    for (int i = 0; i < 10; i++) {
        myArray[i] = (i + 1) * 10;
    }

    for (int j = 0; j < 10; j++) {
        printf("%d ", myArray[j]);
    }

    printf("\n");

    return 0;
}