#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    // printf("Hello, %s %s\n", argv[1], argv[2]);
    if (argc >= 2)
    {
        // printf("Hello, %s\n", argv[1]);
        printf("Hello, ");
        for (int i = 1; i < argc; i++) // print out all the args after greet
        {
            printf("%s ", argv[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Hello, World\n");
    }
}
