#include "holberton.h"

/**
* print_diagonal - print a variable number of spaces and slashes
*to make a diagonal line output
* @n: any number, length of the diagonal
*
* Return: void
**/

void print_diagonal(int n)
{
	int x, y;

	x = n;
	y = n;

	while (n > 0)
	{

		while (x > n)
		{
			_putchar(' ');
			x--;
		}

		_putchar('\\');
		_putchar('\n');

		x = y;
		n--;
	}
	_putchar('\n');
}
