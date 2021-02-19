#include "holberton.h"

/**
* leet - encode a string into 1337
* @c: string literal of any size
*
* Return: pointer to encoded string literal
*/

char *leet(char *c)
{
	int n, x;

	char alpha[] = "aeotlAEOTL";

	char num[] = "4307143071";

	for (n = 0; c[n] != 00; n++)
	{
		for (x = 0; alpha[x] != 00; x++)
		{
			if (c[n] == alpha[x])
			{
				c[n] = num[x];
			}
		}
	}

	return (c);

}
