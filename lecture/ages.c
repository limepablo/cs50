/**
 * Розробити програму, яка приймає від користувача його вік.
 * Якщо вік від 0 до 11 – вивести у консоль “Дитина”.
 * Якщо вік від 12 до 19 – вивести у консоль “Підліток”.
 * Якщо вік більший за 20 – вивести у консоль “Дорослий”
*/

#include <cs50.h>
#include <stdio.h>

int main()
{
    int age = get_int("How old are you? ");

    if (age >= 0 && age <= 11) {
        printf("Kid\n");
    }   else if (age >= 12 && age <= 19) {
        printf("Youngster\n");
    }   else if (age >= 20) {
        printf("Old\n");
    }   else {
        printf("Invalid data..\n");
        return -1;
    }

    return 0;

}


