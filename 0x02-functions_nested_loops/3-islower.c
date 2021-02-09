#include "holberton.h"

/**
*_islower - Determine if a letter is lowercase
*@c is an integer for any letter of the alphabet
*
*return: if letter is lowercase, true, if otherwise, false
*/

int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}

	return (0);
}
