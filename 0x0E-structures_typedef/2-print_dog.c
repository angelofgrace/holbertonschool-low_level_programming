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
	else
	{
	printf("Name: %s\n", strnil((*d).name));
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", strnil((*d).owner));
	}

}
