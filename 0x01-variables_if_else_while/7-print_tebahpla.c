#include <stdio.h>

/**
* main - print the lowercase alphabet in reverse
*
* Return: 0 if all letters reversed
*/

int main(void)
{
	int c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
