#include "holberton.h"

/**
* binary_to_uint - Convert a binary string to an unsigned integer
* @b: string of 1's and 0's
*
* Return: Converted number, base 10, unsigned integer, or 0 in failure.
*/

unsigned int binary_to_uint(const char *b)
{

	int i, r, c, bit, strlen;

	unsigned int result;

	result = 0;

	if (b == NULL)
	{
		return (0);
	}

	i = 0;
	strlen = 0;
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		strlen++;
		i++;
	}

	for (r = strlen - 1, c = 0; r >= 0; r--, c++)
	{
		if (b[r] == '0')
		{
			bit = 0;
		}
		else
		{
			bit = 1;
		}

	result += bit << c;
	}

	return (result);
}
