#include <stdio.h>
#include "holberton.h"
/** 
*main - replace multiples of five and three while counting to 100
*
* return: 0;
*/


void fizzy_buzzy(void)
{
	int i;

	i = 1;

	while (i <= 100)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", i);
		}

		i++;
	}

	printf("\n");

	return (0);
}
