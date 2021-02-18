#include "holberton.h"

void swap_int(int *a, int *b);

/**
* rev_array - reverse the order of integers in an array
* @a: array of integers of any length
* @n: number of elements in the array
*
* Return: void
*/

void reverse_array(int *a, int n)
{
	int i;

	for (i = 0; i < n / 2; i++)
	{
		swap_int(&a[i], &a[n - i - 1]);
	}
}

/**
* swap_int - swap the values of two variables outside the function
* @a: pointer with an integer target value
* @b: pointer with a different integer target value
*
* Return: void
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;

	*a = *b;

	*b = tmp;
}

