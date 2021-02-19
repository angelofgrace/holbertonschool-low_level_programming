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
	while (*c != 00)
	{
		if (*c >= 97 && *c <= 122)
		{
			*c = *c - 32;
		}
		c++;
	}

	return (c);
}
