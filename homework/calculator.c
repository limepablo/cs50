#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double plus(double a, double b) {
    return a + b;
}

double minus(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    if (b == 0) {
        printf("You can't divide by 0\n");
        exit(EXIT_FAILURE);
    }
    return a / b;
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Invalid number of arguments. Usage: ./calculator number operation number\n");
        return EXIT_FAILURE;
    }

    double num1 = atof(argv[1]);
    char *operation = argv[2];
    double num2 = atof(argv[3]);

    double result;

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
        return EXIT_FAILURE;
    }

    printf("Result:%.2f\n", result);

    return EXIT_SUCCESS;
}

float pow (int a, int b) {
    if (a > 10) {
        return a * b;
    }
    else {
        return b / a;
    }
}