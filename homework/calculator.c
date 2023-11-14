#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int plus(double a, double b) {
    return a + b;
}

int minus(double a, double b) {
    return a - b;
}

int multiply(double a, double b) {
    return a * b;
}

int divide(double a, double b) {
    if (b == 0) {
        printf("You can't divide 0\n");
        exit(EXIT_FAILURE);
    }
    return a / b;
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Invalid number of arguments. Usage: ./calculator number operation number\n");
        return EXIT_FAILURE;
    }

    int num1 = atof(argv[1]);
    char *operation = argv[2];
    int num2 = atof(argv[3]);

    int result;

    if (strcmp(operation, "+") == 0) {
        result = plus(num1, num2);
    } else if (strcmp(operation, "-") == 0) {
        result = minus(num1, num2);
    } else if (strcmp(operation, "*") == 0) {
        result = multiply(num1, num2);
    } else if (strcmp(operation, "/") == 0) {
        result = divide(num1, num2);
    } else {
        printf("You cannot do this %s\n", operation);
        return 1;
    }

    printf("Result:\n", result);

    return 0;
}