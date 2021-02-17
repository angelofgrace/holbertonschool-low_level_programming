#include "holberton.h"

int _strlen(char *s);

/**
* print_rev - print the reverse of a string of characters
* @s: a string of characters
*
* Return: void
*/

void print_rev(char *s)
{
	int s_len;
	int i;

	s_len = _strlen(s);

	for (i = s_len; i >= 0; i--)
	{
		_putchar(s[i - 1]);
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

