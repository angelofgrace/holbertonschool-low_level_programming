#include <stdio.h>
#include <stlib.h>

int linear_search(int *array, size_t size, int value)
{
    int x;
    if (array == NULL)
    {
        return (-1);
    }

    for (x = 0; x < size; x++)
    {
        if (array[x] == value)
        {
            return (x);
            printf("Value checked array[%d] = [%d]", x, value);
        }
    }

    return (-1);

}