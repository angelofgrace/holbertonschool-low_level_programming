#include "holberton.h"

/**
* factorial - caluclate the factorial of a number
* @n: a positive integer
*
* Return: result of the factorial of n , or -1 for error
*	if value is below zero
*/
int factorial(int n)
{
	if (n <= -1)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
