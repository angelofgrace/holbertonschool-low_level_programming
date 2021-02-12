#include "holberton.h"

/**
* print_number - print any integer to standard output
* @n: any integer value
*
* Return: void
*/

void print_number(int n)
{
int x;

unsigned int i;

i = n; 

x = 0;

if (n < 0)
{
	_putchar('-');
	i = n * -1;
}

while (i >= 1)
{
	x = x * 10;

	x = x + (i % 10);

	i = i / 10;
}

while (x >= 0)
{
	_putchar((x % 10) + '0');

	x = x / 10;

	if (x < 1)
	{
		break;
	}
}
}
