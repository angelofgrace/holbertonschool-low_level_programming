#include "holberton.h"

/**
* _pow_recursion - calculate x to the value of y
* @x: base number, to be multiplied into itself
* @y: exponent
*
* Return: running value of exponent being calculated or
*	-1 for error if y is negative
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	if (y > 0)
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
	else
	{
		return (1);
	}
}
