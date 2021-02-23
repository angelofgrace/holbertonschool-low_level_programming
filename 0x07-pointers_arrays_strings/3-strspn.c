#include "holberton.h"

/**
* _strspn - get the length of a prefix substring
* @accept: string sought, to contrast with s
* @s: origin string, to search for accept
*
* Return: number of same characters between the two input strings
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, n;

	n = 0;

	for (i = 0; s[i] != 00; i++)
	{
		for (j = 0; accept[j] != 00; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (accept[j] == 00)
			break;
	}

	return (n);
}
