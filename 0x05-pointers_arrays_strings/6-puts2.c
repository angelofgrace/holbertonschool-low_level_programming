#include "holberton.h"

/**
* puts2 - print every other character of a string
* @str: a string of any length
*
* Return: void
*/

void puts2(char *str)
{
	for ( ; *str != '\0'; str++)
	{
		if (*str % 2 == 0)
		{
			_putchar(*str);
		}
	}
	_putchar('\n');
}
