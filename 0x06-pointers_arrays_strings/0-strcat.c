#include "holberton.h"

int _strlen(char *s);

/**
* _strcat - Concatenate one string onto another
* @dest: First half of input string
* @src: Second half of input string
*
* Return: a pointer to dest, which will contain the concatenated string
*/

char *_strcat(char *dest, char *src)
{
	int i, k;

	for (i = _strlen(dest), k = 0; k < _strlen(src); i++, k++)
	{
		dest[i] = src[k];
	}

	dest[i] = '\0';

	return (dest);
}





/**
* _strlen - find the length of a string of characters
* @s: string of characters in an array
*
* Return: the number of characters in input string (minus null val), as integer
*/


int _strlen(char *s)
{
	int x;

	x = 0;

	while (*s != '\0')
	{
		s++;
		x++;
	}

return (x);
}
