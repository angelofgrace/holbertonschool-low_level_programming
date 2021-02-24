#include "holberton.h"

/**
* _puts_recursion - recursively output subsequent characters in a string
* @s: a string literal of any length
*
* Return: void
*/

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	s++;
	_puts_recursion(s);
}
