#include "holberton.h"
#include <stdio.h>

/**
* _strstr - locate a substring
* @haystack: string to be searched
* @needle: substring sought
*
* Return: pointer to beggning of found substring, or NULL
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j, y;

	char *p;

	i = 0;
	y = 0;
	p = &haystack[0];

	while (haystack[i] != 00)
	{
		j = 0;

		if (needle[0] == 00)
			return (p);

		if (needle[j] == haystack[i])
		{
			p = &haystack[i];
		}
		while (needle[j] == haystack[i])
		{
			j++;
			i++;
		if (needle[j] == 00)
		{
			y = 1;
			break;
		}
		}
		i++;
	}
	if (y == 0)
	{
		return (NULL);
	}
	else
	{
	return (p);
	}
}
