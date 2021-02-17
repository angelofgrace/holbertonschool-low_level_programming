#include "holberton.h"

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
