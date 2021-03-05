#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>


void *malloc_checked(unsigned int b)
{

	unsigned int *p;

	p = malloc(b);


	printf("p is %u", *p);

	if (p == NULL)
	{
		exit(98);
	}

	return (p);
}

