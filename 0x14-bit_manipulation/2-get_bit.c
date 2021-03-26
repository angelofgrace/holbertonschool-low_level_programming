#include "holberton.h"

/**
* get_bit - Identify the value of a single bit within an %ul
* @n: the number, an unsigned long int
* @index: the bit within the number
*
* Return: True or False
*/

int get_bit(unsigned long int n, unsigned int index)
{

	if (index > 63)
		return (-1);

	if (n >> index & 1)
		return (1);
	else
		return (0);

}
