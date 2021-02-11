#include "holberton.h"

/**
* times_table - sequentially list multiplication tables up to nine
*
* Return: void
*/

void times_table(void)
{
	int i, x;

	for (i = 0; i < 10; i++)
	{
		for (x = 0; x < 10; x++)
		{
			if (x > 1)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (i * x < 10)
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
