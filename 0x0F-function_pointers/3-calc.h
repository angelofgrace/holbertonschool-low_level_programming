#ifndef CALC_H
#define CALC_H
#include <stdio.h>
#include <stdlib.h>
/**
* struct op - Struct op
*
* @op: The operator
* @f: The function associated
*/

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

/** functions in op_functions */
/** find sum of numbers */
int op_add(int a, int b);
/** find difference between numbers */
int op_sub(int a, int b);
/** find product of numbers */
int op_mul(int a, int b);
/** divide numbers */
int op_div(int a, int b);
/** find remainder of numbers divided */
int op_mod(int a, int b);


/** function in get_op_func */
int (*get_op_func(char *s))(int, int);




#endif
