#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
* _calloc - allocate memory for an array and fill it with 00
* @nmemb: number of elements to make up the array
* @size: size of each element in the array
*
* Return: pointer to the new array
*/



void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *p;

	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(size * nmemb);

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size * nmemb; i++)
	{
		p[i] = '\0';
	}

	return (p);

}
