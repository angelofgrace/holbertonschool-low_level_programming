#include <stdio.h>

/**
 *main - a more complicated putchar loop
 *
 *Return: The alphabet in lowercase, then uppercase letters
 */

int main(void)
{
	int star;

	star = 'A';

	for (star = 'A', star <= 'z', star++)
	{
		putchar(star);
	}

	putchar('\n');

	return (0);
}
