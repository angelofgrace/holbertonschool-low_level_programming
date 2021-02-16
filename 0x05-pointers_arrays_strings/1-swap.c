#include "holberton.h"
#include <stdio.h>

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
