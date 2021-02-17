#include "holberton.h"
#include <stdio.h>

/**
* print_array - print from an array a specified number of elements
* @a: an array of integers, with at least n+1 elements
* @n: a number less than the number of elements in a
*
* Return: void
*/


void print_array(int *a, int n)
{

	int i;

	i = 0;

	while (i < n - 1)
	{
		printf("%d, ", a[i]);
		i++;
	}

	if (i == n - 1)
	{
		printf("%d", a[i]);
	}

	printf("\n");
}
