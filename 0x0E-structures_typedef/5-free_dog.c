#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
* free_dog - free all elements of struct dog and alloc'd memory for struct dog
* @d: pointer to struct dog
*
* Return: void
*/

void free_dog(dog_t *d)
{
	if (d)
	{
	free((*d).name);
	free((*d).owner);
	free(d);
	}
}
