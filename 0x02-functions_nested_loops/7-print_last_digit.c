#include "holberton.h"
#include "stdio.h"

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


/**
*print_last_digit - isolate the last digit of a number
*@i: any integer
*
*Return: the value of the last digit of i
*/

int print_last_digit(int i)
{

	int dig;

	dig = _abs(i);

	dig = dig % 10;

	_putchar(dig + '0');

	return (dig);
}
