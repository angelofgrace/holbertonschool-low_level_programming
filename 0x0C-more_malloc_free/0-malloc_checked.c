#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - check for malloc fail and exit if returns NULL
* @b: malloc request size
*
* Return: pointer to newly allocated data
*/

void *malloc_checked(unsigned int b)
{

	unsigned int *p;

	p = malloc(b);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}

