#include <stdio.h>
#include <stlib.h>

/**
 * linear_search - Evaluate each element for equality until true
 * 
 * @array: pointer to first element of given array
 * @size: length of the array
 * @value: sought value
 * 
 * Return: index of found value, or -1
 */
int linear_search(int *array, size_t size, int value)
{
    int x;
    if (array == NULL)
    {
        return (-1);
    }

    for (x = 0; x < size; x++)
    {
        printf("Value checked array[%d] = [%d]", x, value);
        if (array[x] == value)
        { 
            return (x);
        }
    }

    return (-1);

}