#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *p;

	unsigned int i, j;

	p = malloc(sizeof(s1) + n);

	if (p == NULL)
	{
		return(NULL);
	}

	for (i = 0; s1[i] != 00; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
		p[i] = s2[j];
		if (s2[j] == 00)
			break;
	}

	return (p);


}
