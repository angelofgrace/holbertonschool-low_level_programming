#include "holberton.h"

/**
* cap_string - Capitalize Every Word Of A String
* @c: a string literal of any length
*
* Return: character type pointer to the capitalized string literal
*/

char *cap_string(char *c)
{

	int i;

	i = 0;

	while (c[i] != 00)
	{
		if (c[i - 1] == ',' || c[i - 1] == ';' || c[i - 1] == '.' ||
c[i - 1] == '!' || c[i - 1] == '?' || c[i - 1] == '"' || c[i - 1] == '(' ||
c[i - 1] == ')' || c[i - 1] == '{' || c[i - 1] == '}' || c[i - 1] == 12 ||
c[i - 1] == 11 || c[i - 1] == 32 || i == 0)
		{
		c[i] = c[i] - 32;
		i++;
		}
	}
	return (c);
}
