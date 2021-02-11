#include <stdio.h>

/**
*print_to_98 - take input and start counting until 98
*@n: any natural number
*
*Return: void
*/

void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);

		if (n < 98)
		{
			n++;
		}
		else
		{
			n--;
		}
	}
	printf("%d", n);
	printf("\n");
}
