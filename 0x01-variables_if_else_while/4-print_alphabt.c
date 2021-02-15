#include <stdio.h>

/**
* main - print the alphabet, skip q and e
*
* Return: no return value
*/

int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c == 'q' || c == 'e')
		{
			continue;
		}

		putchar(c);
	}

	putchar('\n');

	return (0);
}
