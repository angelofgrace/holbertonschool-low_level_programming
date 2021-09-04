#include <stdio.h>
#include <stdlib.h>

int binary_search(int *array, size_t size, int value)
{
    int result;

    if (array == NULL)
    {
        return (-1);
    }

    result = search_recursive(array, 0, size - 1, value);

    return result;    
}

int search_recursive(int *array, int low, int high, int value)
{
    int mid, i;

    printf("Searching in array: ");
    for (i = low; i <= high; i++)
    {
        printf("%d", array[i]);
    }
        printf("\n");
    if (high >= 1)
    {
        mid = low + ((high - low) / 2);

        if (array[mid] == value)
        {
            return (mid);
        }
        else if (array[mid] > value)
        {
            return (search_recursive(array, low, mid - 1, value));
        }
        
        if (mid == high)
        {
            return (-1);
        }
        
        return (search_recursive(array, mid + 1, high, value));
    }

    return (-1);
}