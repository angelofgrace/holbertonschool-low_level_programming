#include "holberton.h"

/**
* _isdigit - determines if a character is a single numerical digit
* @c: any character or corresponding ASCII vale
*
* Return: true for a single digit number, false otherwise
*/


int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
