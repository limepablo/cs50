#include <stdio.h>

int factorial(int n);

int main() {
    int number = 3;

    if (number <= 0) {
        printf("Factorial for this number does not exist.\n");
    } else {
        printf("Factorial: %d\n", factorial(number));
    }

    return 0;
}

int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}