#include "holberton.h"

int _strlen(char *s);

/**
* _strncpy - copy n characters from string src to dest
* @dest: location to be written as src
* @src: string of any length
* @n: number of characters to write from src to dest
*	(exess written as null bytes)
*
* Return: pointer to newly copied string (dest)
*/

char *_strncpy(char *dest, char *src, int n)
{
	int k;

	for (k = 0; k < n; k++)
	{
		if (k <= _strlen(src))
		{
			dest[k] = src[k];
		}
		else
		{
			dest[k] = '\0';
		}
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
