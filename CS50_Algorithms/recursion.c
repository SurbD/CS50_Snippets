#include <cs50.h>
#include <stdio.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    if (n <= 0)
    {
        return;
    }

    draw(n - 1); // Recursive call

    for (int i = 0; i < n; i++)
    {
        printf("#"); // prints out the octothorp n times
    }
    printf("\n");
}
