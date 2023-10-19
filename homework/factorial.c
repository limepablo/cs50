#include <stdio.h>

int factorial(long long unsigned int n);

int main() {
    long long unsigned int number = 31;

    if (number <= 0) {
        printf("Factorial for this number does not exist.\n");
    } else {
        printf("Factorial: %d\n", factorial(number));
    }

    return 0;
}

int factorial(long long unsigned int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}