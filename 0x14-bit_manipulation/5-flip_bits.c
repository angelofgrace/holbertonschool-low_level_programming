#include "holberton.h"

/**
* flip_bits - find the number of bits to flip to change an integer value
* @n: first ul ine input for comparison
* @m: second ul int input for comparison
*
* Return: counter of number of bits to change
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int q; /* contrast string */
	unsigned int counter; /* count of differing digits */
	
	counter = 0;

	q = n ^ m; /* q is the result of Bitwise XOR n and m */

	while (q) /* iterate through the binary digits (depleting) */
	{
		/* increment by 1 when contrast results in 1 (based on XOR) */
		counter += (q & 1);
		q >>= 1;
	}

	return (counter);
}
