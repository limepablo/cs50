#include <string.h>
#include <ctype.h>
#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, string argv[])
{

    if (argc == 2 && isdigit(*argv[1]))

    {

        int k = atoi(argv[1]);
        string text = get_string("plaintext: ");
        printf("ciphertext: ");

        for (int i = 0, n = strlen(text) ; i < n; i++)
        {
            if (text[i] >= 'a' && text[i] <= 'z')
            {
                printf("%c", (((text[i] - 'a') + k) % 26) + 'a');
            }
            else if (text[i] >= 'A' && text[i] <= 'Z')
            {
                printf("%c", (((text[i] - 'A') + k) % 26) + 'A');
            }

            else
            {
                printf("%c", text[i]);
            }
        }

        printf("\n");
        return 0;
    }

    else
    {
        printf("Usage: ./caesar k\n");
        return 1;

    }

}