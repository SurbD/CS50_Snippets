#include <stdio.h>

int binary_search(int array[], int target, int size);

int main(void)
{
    int array[] = {1,2,3,4,5,6,7,8,9};
    int target = 5;
    int size = sizeof(array) / sizeof(array[0]);
    int result = binary_search(array, target, size);

    if (result == -1)
    {
        printf("Target not found in array\n");
    }
    else
    {
        printf("Target found at index: %i\n", result);
    }
}

int binary_search(int array[], int target, int size)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int midpoint = (low + high) / 2;

        if (array[midpoint] == target)
        {
            return midpoint;
        }
        if (array[midpoint] < target)
        {
            low = midpoint + 1;
        }
        else
        {
            high = midpoint - 1;
        }
    }

    return -1;
}
