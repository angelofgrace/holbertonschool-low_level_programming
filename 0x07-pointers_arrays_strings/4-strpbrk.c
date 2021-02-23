#include "holberton.h"

/**
* _strpbrk - locate the first occurance of a set of bytes
*	within a string
* @s: string literal to search
* @accept: set of bytes sought
*
* Return: pointer to the first matching byte, or NULL
*/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != 00; i++)
	{
		for (j = 0; accept[j] != 00; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (s[i] == accept[j])
			break;
	}

	return (&s[i]);
}
