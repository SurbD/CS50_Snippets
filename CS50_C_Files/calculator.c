#include <stdio.h>
#include <cs50.h>


// int main(void)
// {
//     long x = get_long("x: ");
//     long y = get_long("y: ");
//
//     printf("%li\n", x+y);
// }


// int main(void)
// {
//     float x = get_float("x: ");
//     float y = get_float("y: ");
//
//     printf("%f\n", x / y);
// }


// Using Type Casting

int main(void)
{
    long x = get_long("x: ");
    long y = get_long("y: ");

    // float z = (float) x / (float) y;
    double z = (double) x / (float) y; // using double for precision
    printf("%.20f\n", z);
}
