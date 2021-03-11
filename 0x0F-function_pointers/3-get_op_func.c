#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* get_op_func - Determine the function to call based on operand input
* @s: Input operand
*
* Return: pointer to the operation function in op_func
*/

int (*get_op_func(char *s))(int, int)
{

	int i;

	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

	i = 0;

	while (i < 5)
	{
		if (s[0] == ops[i].op[0] && ops[i].op[1] == '\0')
		{
			return (ops[i].f);
		}
		i++;
	}

	return (NULL);

}
