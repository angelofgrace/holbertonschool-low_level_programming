#include "holberton.h"

/**
*print_sign - identify if an integer is positive, negative, or zero
*@n: any numeric integer
*
*Return: 1 indicates positive, 0 indicates 0, and -1 indicates negative
*/

int print_sign(int n)
{
	if (n >= 1)
	{
		_putchar('+');
		return (1);
	}
	else if (n <= -1)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
