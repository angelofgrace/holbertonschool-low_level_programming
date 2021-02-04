#include <stdlib.h>
#include <time.h>

/**
 *main - produce an integer and determine
 *if it is positive, negative, or zero.
 *
 *Return: Prints the integer in a string delaring
 *if it is positive, negative, or zero
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf "%d is positive\n";
	}
	else if (n < 0)
	{
		printf "%d is negative\n";
	}
	else
	{
		printf "%d is zero\n";
	}

	return (0);
}
