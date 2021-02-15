#include <stdio.h>

/**
* main - print single digits using putchar
*
* Return - all numbers are spelled out
*/

int main(void)
{

	int c;

	for (c = 0; c <= 9; c++)
	{
		putchar(c + '0');
	}

	putchar('\n');

	return (0);
}
