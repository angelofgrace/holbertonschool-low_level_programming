#include "holberton.h"
#include <stdio.h>

int prime_iterator(int sq, int n);

/**
* is_prime_number - Determine if an integer is prime
* @n: any integer
*
* Return: True if prime, False if composite
*/

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (prime_iterator(2, n));
}

/**
* prime_iterator - check each possible divisor
* @sq: iterating variable, being divided into n to check prime status
* @n: input integer from is_prime_number
*
* Return: True if prime, False if composite
*/

int prime_iterator(int sq, int n)
{
	if (n % sq == 0)
	{
		return (0);
	}

	if (sq >= n / 2)
	{
		return (1);
	}

	return (prime_iterator((sq + 1), n));
}
