#include "holberton.h"

/**
* _puts - print a line of characters to standard output
* @str: any string of characters
*
* Return: void
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	_putchar('\n');
}
