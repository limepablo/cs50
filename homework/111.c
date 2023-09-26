#include <stdio.h>
#include <cs50.h>

int main() {
    int number;
    int sum = 0;


    do {
        number = get_int("Enter a positive number: ");
    } while (number <= 0);


    int i = 1;
    while (i <= number) {
        sum += i;
        i++;
    }
    printf("Сума чисел від 1 до %d (while): %d\n", number, sum);


    sum = 0;
    i = 1;


    do {
        sum += i;
        i++;
    } while (i <= number);
    printf("Сума чисел від 1 до %d (do...while): %d\n", number, sum);


    sum = 0;


    for (i = 1; i <= number; i++) {
        sum += i;
    }
    printf("Сума чисел від 1 до %d (for): %d\n", number, sum);

    return 0;
}
