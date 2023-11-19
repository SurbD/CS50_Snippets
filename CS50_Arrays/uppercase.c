#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    string s = get_string("Before: ");
    printf("After: ");

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            printf("%c", s[i] - 32); // Subtracting 32 because caps are 32 away in the ascii chart
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
}
