#include "holberton.h"

int _strlen(char *s);

/**
* *_strcpy - copy a string to another point in memory
* @dest: pointer to destination, will contain copy of src input
* @src: string of characters, to copy to dest
*
* Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{

	int i;

	for (i = 0; i < _strlen(src) + 1; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}



/**
* _strlen - find the length of a string of characters
* @s: a string of characters in an array
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
