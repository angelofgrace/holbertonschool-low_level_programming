#include "holberton.h"

/**
* print_line - print a line of underscores with a variable length
* @n: any positive number, represents length of line
*
* Return: void
*/

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');

		n--;
	}

	_putchar('\n');
}
