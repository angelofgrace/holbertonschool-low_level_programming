#include <stdio.h>

/**
 *main - entry point
 *
 *Return: string of lowercase alphabet
 */

int main(void)
{
	int lwr;

	lwr = 'a';

	for (lwr = 'a'; lwr <= 'z'; lwr++)
	{
		putchar(lwr);
	}
		putchar('\n');

	return (0);
}
