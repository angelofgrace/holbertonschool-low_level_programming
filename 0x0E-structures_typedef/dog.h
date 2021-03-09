#ifndef DOG_H
#define DOG_H

/**
* struct dog - the goodest dogs
* @name: who's a good dog
* @age: you've always been a good dog
* @owner: you're my bestest dog, aren't you
*
* Description: truly, good dogs
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

/** Task 1 - Initialize struct dog with input information */
void init_dog(struct dog *d, char *name, float age, char *owner);

/** Task 2 - Print the contents of struct dog */
void print_dog(struct dog *d);


/** DOG_H endif */
#endif
