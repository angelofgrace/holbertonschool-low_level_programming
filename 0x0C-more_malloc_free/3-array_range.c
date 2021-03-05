#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_range - create an array filled with sequential integers
* @min: lowest included integer
* @max: largest included integer
*
* Return: a pointer to the sequential integers
*/

int *array_range(int min, int max)
{

	int *p;

	int i, n;

	if (min > max)
	{
		return (NULL);
	}

	p = malloc(sizeof(int) * ((max - min) + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0, n = min; n <= max; i++, n++)
	{
		p[i] = n;
	}

	return (p);
}
