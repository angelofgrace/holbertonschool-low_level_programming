#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

#define strnil(data) ((data) == NULL ? ("(nil)") : (data))

/**
* print_dog - print the contents of struct, dog
* @d: pointer to struct, dog
*
* Return: void
*/

void print_dog(struct dog *d)
{

	if (d == NULL)
	{
		printf("Oops");
	}

	printf("Name: %s\n", strnil((*d).name));

	if ((*d).age == 00)
	{
		printf("Age: (nil)\n");
	}
	else
	{
		printf("Age: %f\n", (*d).age);
	}

	printf("Owner: %s\n", strnil((*d).owner));
}
