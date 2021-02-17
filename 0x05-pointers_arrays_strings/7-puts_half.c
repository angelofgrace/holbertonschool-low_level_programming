#include "holberton.h"

/**
* puts_half - print the second half of a string
* @str: a string of any length
*
* Return: void
*/

void puts_half(char *str)
{
	int i, hlf;

	if (_strlen(str) % 2 == 0)
	{
		hlf = (_strlen(str) / 2);
	}
	else
	{
		hlf = ((_strlen(str) - 1) / 2);
	}

	for (i = 0; i < _strlen(str); i++)
	{
		if (i >= hlf)
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
