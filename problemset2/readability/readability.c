#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    string text = get_string("Text: ");

    int letters = 0
    int words = 0
    int sent = 0

    for(int i = 0; i < strlen(text); i++)
    {
        if(isalpha(text[i]))
        {
            letters++
        }
        
    }
}