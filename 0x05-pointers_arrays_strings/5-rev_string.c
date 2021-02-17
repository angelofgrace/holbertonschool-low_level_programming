#include "holberton.h"

int _strlen(char *s);

void swap_char(char *a, char *b);

/**
* rev_string - reverse the order of characters in a string
* @s: a string of any length
*
* Return: void
*/

void rev_string(char *s)
{
	int n;

	int i;

	n = _strlen(s);

	for (i = 0; i < n / 2; i++)
	{
		swap_char(&s[i], &s[n - i - 1]);
	}
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



/**
* swap_char - swap the values of two variables outside the function
* @a: pointer with an character target value
* @b: pointer with a different character target value
*
* Return: void
*/

void swap_char(char *a, char *b)
{
	char tmp;

	tmp = *a;

	*a = *b;

	*b = tmp;
}
