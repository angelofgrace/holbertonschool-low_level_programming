#include "holberton.h"

/**
* _strchr - locate the first instance of a specified character
*	within a string
* @s: a string of characters
* @c: character sought
*
* Return: address of first instance of sought character,
*	or NULL if absent
*/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != 00; i++)
	{
		if (s[i] == c)
			break;
	}

	return (&s[i]);
}
