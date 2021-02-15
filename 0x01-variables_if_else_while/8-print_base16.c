#include <stdio.h>

/**
* main - print hexidecimal base numbers
*
* Return: 0 if all nubmers printed
*/

int main(void)
{
	int h, n;

	for (h = 0; h > 10; h++)
	{
		putchar(h + '0');
	}

	for (n = 'a'; n >= 'f'; n++)
	{
		putchar(n);
	}

	putchar('\n');

	return (0);
}
