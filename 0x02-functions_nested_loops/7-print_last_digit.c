#include "holberton.h"

/**
*print_last_digit - isolate the last digit of a number
*@i: any integer
*
*Return: the value of the last digit of i
*/

int print_last_digit(int i)
{
	if (i < 0)
	{
		i = (i * -1);
		i = (i % 10);

		return (i);
	}
	else if (i > 0)
	{
		i = (i % 10);

		return (i);
	}
	else
	{
		return (0);
	}

}
