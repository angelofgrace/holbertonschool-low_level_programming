#include "holberton.h"

/**
* print_times_table - lists the multiplication table of number 'n'
* @n: any positive number below 15
*
* Return: void
*/

void print_times_table(int n)
{
	int i, x;
if ((n >= 0) || (n <= 15))
{
	for (i = 0; i < n; i++)
	{
		for (x = 0; x < n; x++)
		{
			if (x > 1)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (i * x < n)
			{
				if (x > 0)
				{
					_putchar(' ');
					_putchar((i * x) + '0');
				}
			}
			else
			{
				_putchar((i * x) / 10 + '0');
				_putchar((i * x) % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
}

