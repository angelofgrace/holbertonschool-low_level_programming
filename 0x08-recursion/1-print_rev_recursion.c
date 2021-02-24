#include "holberton.h"

/**
* _print_rev_recursion - print a string in reverse
* @s: a string literal of any size
*
* Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
