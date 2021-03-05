#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* string_nconcat - Concatenate two strings in newly allocated memory
* @s1: string literal, initial string
* @s2: string literal, secondary string, will use n characters from
* @n: number of characters of second string to add to first string
*
* Return: NULL on malloc fail, else pointer to new string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *p;

	unsigned int i, j;

	p = malloc(sizeof(s1 + n + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		for (i = 0; s1[i] != 00; i++)
		{
			p[i] = s1[i];
		}
	}
	else
	{
		i = 0;
	}
	if (s2 != NULL)
	{
		for (j = 0; j < n; j++, i++)
		{
			p[i] = s2[j];
			if (s2[j] == 00)
				break;
		}
	}

	return (p);
}
