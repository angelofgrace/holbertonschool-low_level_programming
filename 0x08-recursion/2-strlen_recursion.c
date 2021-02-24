#include "holberton.h"

/**
* _strlen_recursion - find the length of a string of characters
* @s: a string literal
*
* Return: Integer value equal to number of characters in input string
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (1 + _strlen_recursion(s));
}
