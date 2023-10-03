// Написати програму, яка отримує від користувача розмір масиву чисел з
// рухомою комою, створює масив визначеної розмірності та отримує від
// користувача значення елементів масиву. Після цього програма виводить
// елементи масиву у зворотному порядку.



#include <cs50.h>
#include <stdio.h>

int main()
{
    int size;

    do {
    size = get_int("Enter array size: ");
    float array[size];
    } while (size <= 0);

    for(int i = 0; i < size; i++)
    {
        array[i] = get_float("Enter number %i: ", i + 1);
    }

    printf("Reversed array:\n");
    for(int i = size - 1; i >= 0; i--)
    {
        printf("%i:%f\n", i, array[i]);
    }

    return 0;
}