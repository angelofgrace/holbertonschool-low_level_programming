#include <stdio.h>
#include "dog.h"

/**
* init_dog - initialize the dog structure with input information
* @d: pointer to structure - dog
* @name: string literal containing dog name
* @age: float value age of dog
* @owner: string literal containing owner name
*
* Return: void
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;

}
