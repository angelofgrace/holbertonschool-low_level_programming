#include "holberton.h"

/**
* clear_bit - Set the value of a bit at a given index to 0
* @n: pointer to an unsigned long integer
* @index: specific bit to be changed
*
* Return: 1 in success, -1 in failure
*/

int clear_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
	{
		return (-1);
	}

	*n = *n & ~(1 << index);

	return (1);
}
