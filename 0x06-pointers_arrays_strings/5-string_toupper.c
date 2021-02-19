#include "holberton.h"

/**
* string_toupper - change lowercase letters
*	in a string to the uppercase version
* @c: any string literal
*
* Return: pointer to the uppercase string literal
*/

char *string_toupper(char *c)
{
	int i;

	i = 0;

	while (c[i] != 00)
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			c[i] = c[i] - 32;
		}
		i++;
	}

	return (c);
}
