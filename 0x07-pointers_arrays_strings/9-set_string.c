#include "holberton.h"
#include <stdio.h>

/**
* set_string - set the value of a pointer to a char
* @S: desired output
* @to: target string to be overwritten
*
* Return: void
*/

void set_string(char **S, char *to)
{
	*S = to;
}
