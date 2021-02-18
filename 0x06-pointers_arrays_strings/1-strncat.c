#include "holberton.h"

int _strlen(char *s);

/**
* _strncat - concatenate up to n characters from source to dest
* @dest: first part of string, target for concatenation
* @src: second part of string, some amount of it will be added to dest
* @n: a number, of letters from src to be concatenated to dest
*
* Return: pointer at dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	for (i = _strlen(dest), k = 0; k < n; i++, k++)
	{
		dest[i] = src[k];

		if (k == _strlen(src))
			break;
	}

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
