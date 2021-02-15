#include <stdio.h>

/**
 *main - a more complicated putchar loop
 *
 *Return: The alphabet in lowercase, then uppercase letters
 */

int main(void)
{
	int C, q;

	for (q = 'a'; q <= 'z'; q++)
	{
		putchar(q);
	}

	for (C = 'A'; C <= 'Z'; C++)
	{
		putchar(C);
	}

	putchar('\n');

	return (0);
}
