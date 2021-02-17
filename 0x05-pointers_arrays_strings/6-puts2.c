#include "holberton.h"

int _strlen(char *s);

/**
* puts2 - print every other character of a string
* @str: a string of any length
*
* Return: void
*/

void puts2(char *str)
{
	int n, i;

	n = _strlen(str);

	for (i = 0; i <= n; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
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
