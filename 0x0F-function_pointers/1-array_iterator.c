#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
* array_iterator - Call a function for each element of an array
* @array: input array to iterate through
* @size: size of input array
* @action: function to call for each array element
*
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
	{
		exit(0);
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
