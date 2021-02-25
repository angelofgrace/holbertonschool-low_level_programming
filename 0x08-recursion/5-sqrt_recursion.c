#include "holberton.h"

int guess(int g, int n);

/**
* _sqrt_recursion - Calculate the square root of an integer
* @n: any whole integer
*
* Return: the square root of n, or -1 if no normal square root
*/

int _sqrt_recursion(int n)
{
	return (guess(0, n));
}

/**
* guess - Check each number for the square root of input integer
* @g: iterative guess for square root of n, init at 0
* @n: intput integer from _sqrt_recursion
*
* Return: the square root of n, or -1 if no normal square root
*/

int guess(int g, int n)
{
	int sqr;

	sqr = g * g;

	if (sqr == n)
	{
		return (g);
	}
	if (sqr > n)
	{
		return (-1);
	}

	return (guess((g + 1), n));
}
