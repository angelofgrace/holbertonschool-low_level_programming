#include "holberton.h"

/**
* set_bit - Set a specific bit value within an unsigned int
* @n: pointer to an unsigned long int
* @index: specific bit to be set
*
* Return: 1 if success, -1 if failure
*/

int set_bit(unsigned long int *n, unsigned int index)
{

	if (index > 63)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
