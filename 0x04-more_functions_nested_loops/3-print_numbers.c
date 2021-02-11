#include "holberton.h"
/**
* print_numbers - print a line of numbers, zero through nine
*
* Return: void
*/


void print_numbers(void)
{
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}

	_putchar('\n');
}
