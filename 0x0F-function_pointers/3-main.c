#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[])
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
		printf("Error");
		exit(99);
	}
	if (b == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error");
		exit(100);
	}

	printf("%i\n", get_op_func(argv[2])(a, b));

	return (0);
}
