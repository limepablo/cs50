#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Функція для додавання
double add(double a, double b) {
    return a + b;
}

// Функція для віднімання
double subtract(double a, double b) {
    return a - b;
}

// Функція для множення
double multiply(double a, double b) {
    return a * b;
}

// Функція для ділення
double divide(double a, double b) {
    if (b == 0) {
        printf("Помилка: ділення на нуль\n");
        exit(EXIT_FAILURE);
    }
    return a / b;
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        printf("Неправильна кількість аргументів. Використання: ./calculator число операція число\n");
        return EXIT_FAILURE;
    }

    double num1 = atof(argv[1]); // перше число
    char *operation = argv[2];   // операція
    double num2 = atof(argv[3]); // друге число

    double result;

    if (strcmp(operation, "+") == 0) {
        result = add(num1, num2);
    } else if (strcmp(operation, "-") == 0) {
        result = subtract(num1, num2);
    } else if (strcmp(operation, "*") == 0) {
        result = multiply(num1, num2);
    } else if (strcmp(operation, "/") == 0) {
        result = divide(num1, num2);
    } else {
        printf("Непідтримувана операція: %s\n", operation);
        return EXIT_FAILURE;
    }

    printf("Результат: %.2f\n", result);

    return EXIT_SUCCESS;
}