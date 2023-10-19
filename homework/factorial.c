#include <stdio.h>

int factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int number = 6;

    if (number < 0) {
        printf("Factorial for this number does not exist.\n")
    }
}