#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - perform mathematical operations on two input integers
* @argc: number of command line inputs, should be 4
* @argv: value of command line inputs, two integers and one operand
*
* Return: result of mathemtaical functions
*/

int main(int argc, char *argv[])
{

	int a, b;

	(void) argc;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (b == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%i\n", get_op_func(argv[2])(a, b));

	return (0);
}
