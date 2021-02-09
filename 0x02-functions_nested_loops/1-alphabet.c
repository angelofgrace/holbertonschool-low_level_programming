#include "holberton.h"

/**
*print_alphabet - use _putchar to write characters a to z
*in ascending ASCII value
*
*return: void
*/

void print_alphabet(void)
{
char alpha;

for (alpha = 'a'; alpha <= 'z'; alpha++)
{
	_putchar(alpha);
}

	_putchar('\n');
}
