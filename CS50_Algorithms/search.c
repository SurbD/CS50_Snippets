#include <stdio.h>
#include <cs50.h>
#include <string.h>

// int main(void)
// {
//     int numbers[] = {20, 500, 10, 5, 100, 1, 50};
//     
//     int n = get_int("Number: ");
//
//     for (int i = 0; i < 7; i++)
//     {
//         if (n == numbers[i])
//         {
//             printf("Number found in array at index[%i]\n", i);
//             return 0;
//         }
//     }
//     printf("Number not in array\n");
//     return 1;
// }


// Linear Search in array of strings

int main(void)
{
    string strings[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    string s = get_string("String: ");
    for (int i = 0; i < 6; i++)
    {
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found string at index[%i]\n", i);
            return 0;
        }
    }
    printf("Not Found\n");
    return 1;
}
