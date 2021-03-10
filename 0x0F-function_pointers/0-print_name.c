#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_name - call a function via pointer which prints a name
* @name: input string literal which called function will print
* @f: print function
*
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{

	if (name == NULL || f == NULL)
	{
		exit(0);
	}

	f(name);

}
