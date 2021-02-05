#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>

/**
 *main - Interpret the value of the last digit of a randomly generated integer
 *
 *Return: Print a true statement for the value of the last digit of an integer
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int lastval = (n % 10);

	if (lastval > 5)
	{
		printf("Last digit of %d is %i and is greater than 5\n", n, lastval);
	}
	else if (lastval == 0)
	{
		printf("Last digit of %d is %i and is 0\n", n, lastval);
	}
	else
	{
		printf("Last digit of %d is %i and is less than 6 and not 0\n", n, lastval);
	}

	return (0);
}
