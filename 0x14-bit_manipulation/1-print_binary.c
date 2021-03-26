#include "holberton.h"

/**
* print_binary - Convert an unsigned long int into binary, print each digit
* @n: input number, an unsigned long int
*
* Return: void
*/

void print_binary(unsigned long int n)
{

		/** NO malloc, arrays, %, or / */
	int i, j;

	if (n == 0)
	{
		putchar ('0');
	}

	i = (sizeof(unsigned long int) * 8) - 1;
	j = 0;

	while (i >= 0)
	{

		if (n >> i & 1 && j == 0)
		{
			j = 1;
			_putchar ('1');
			i--;
			continue;
		}

		if (j == 1)
		{
			if (n >> i & 1)
				_putchar ('1');
			else
				_putchar ('0');
		}
 
		i--;
	}
}
