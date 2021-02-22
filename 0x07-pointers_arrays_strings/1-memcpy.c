#include "holberton.h"

/**
* _memcpy - copy some bytes of data from src to dest
* @dest: target memory address to contain char type data
* @src: origin memory address containing string literal
* @n: number of bytes to copy
*
* Return: pointer to overwritten dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
