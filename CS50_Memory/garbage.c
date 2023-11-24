#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Prints out 1024 garbage values because scores has been allocated a memory space 
    // but the values have to been initialized to anything.
    // Garbage values -> reminance of that memory that has been used before by 
    // something else in your machine
    int scores[1024];
    for (int i = 0; i < 1024; i++)
    {
        printf("%i\n", scores[i]);
    }
}
