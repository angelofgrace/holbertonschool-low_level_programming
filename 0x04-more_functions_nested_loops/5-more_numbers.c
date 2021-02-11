#include "holberton.h"

/**
* more_numbers - print numbers zero to fourteen, ten times on ten lines
*
* Return: void
*/

void more_numbers(void)
{
	int i, y;

	for (y = 0; y <= 9; y++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
			_putchar((i / 10) + '0');
			}

			_putchar((i % 10) + '0');
		}

		_putchar('\n');
	}
}
