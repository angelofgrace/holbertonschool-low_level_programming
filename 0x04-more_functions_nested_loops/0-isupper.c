#include "holberton.h"
/**
* _isupper - determines if a letter is uppercase
* @c: any alphabetic character
*
* Return: true for uppercase characters, false for lowercase and extraneous
*/

int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
