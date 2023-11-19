#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Using Do While Loop
    int n; // Get size of grid
    do
    {
        n = get_int("Size: ");
    }
    while (n < 1);
    
    // Print grid of bricks
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
