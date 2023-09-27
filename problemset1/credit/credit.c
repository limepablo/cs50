#include <cs50.h>
#include <stdio.h>

int main()
{

    long int card = get_long("Number: ");
    int position = 0;
    int sum = 0;
    int firstnumber = 0;
    int secondnumber = 0;

    do
    {
        int lastnumber = card % 10;
        secondnumber = firstnumber;
        firstnumber = lastnumber;

        position++;
        if (position % 2 == 0)
        {
            lastnumber *= 2;

            if (lastnumber < 10)
            {
                sum += lastnumber;
            }
            else
            {
                sum += lastnumber % 10;
                sum += lastnumber / 10;
            }
        }
        else
        {
            sum += lastnumber;
        }

        card /= 10;
    }
    while (card != 0);

    if (sum % 10 == 0)
    {
        if (firstnumber == 4 && (position == 13 || position == 16))
        {
            printf("VISA\n");
        }
        else if (firstnumber == 5 && (secondnumber >= 1 && secondnumber <= 5) && position == 16)
        {
            printf("MASTERCARD\n");
        }
        else if (firstnumber == 3 && (secondnumber == 4 || secondnumber == 7) && position == 15)
        {
            printf("AMEX\n");
        }
        else
        {
            printf("INVALID\n");
        }
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}