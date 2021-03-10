#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
* int_index - Find the first element of input array for which
*	input function returns true
* @array: input array of integers to iterate through
* @size: size of inpute array
* @cmp: comparison function to apply to each array element
*
* Return: index of array element which returns true, or -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{

	int i;

	/** NULL case */
	if (array == NULL || cmp == NULL)
	{
		exit(0);
	}

	/** iterate through array elements */
	for (i = 0; i < size; i++)
	{
		/**if element returns true, return pointer to it*/
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}

	return (-1);
}
