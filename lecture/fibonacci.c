#include <stdio.h>

int main()
{
    int con = 10;
    int a = 0, b = 1;

    printf("Result:\n");

    for(int i = 1; i <= con; i++)
    {
        int temp = a + b;
        printf("0, 1, %i ", temp);
        a = b;
        b = temp;
    }

    return 0;
}