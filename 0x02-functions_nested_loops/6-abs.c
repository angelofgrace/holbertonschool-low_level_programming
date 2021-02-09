#include "holberton.h"

/**
*_abs - calculate the absolute value of an integer
*@val: any number within the scope of int
*
*Return: return the absolute value of input integer
*/

int _abs(int val)
{
	if (val < 0)
	{
		val = val * -1;

		return (val);
	}
	else if (val > 0)
	{
		return (val);
	}
	else
	{
		return (0);
	}
}
