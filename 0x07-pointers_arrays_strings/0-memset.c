#include "holberton.h"

/**
* _memset - set the first n bytes of memory to an input character
* @s: pointer to a string literal
* @b: character desired to fill in each memory byte
* @n: number of bytes to be set
*
* Return:  pointer to the newly set memory address
*/


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
