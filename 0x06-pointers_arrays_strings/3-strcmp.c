#include "holberton.h"

int _strlen(char *s);

/**
* _strcmp - compare two strings, letter by letter
* @s1: a string literal
* @s2: another string literal
*
* Return: Positive or Negative (based on ASCII value difference) if strings
*	do not match, Zero if strings match entirely
*/

int _strcmp(char *s1, char *s2)
{
	int c;

	for (c = 0; c < _strlen(s2); c++)
	{
		if (s1[c] != s2[c])
			break;
	}

	return (s1[c] - s2[c]);
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
