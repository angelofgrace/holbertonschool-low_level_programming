#include "3-calc.h"

/**
* op_add - find the sum of integers
* @a: first integer
* @b: second integer
*
* Return: Sum of integers
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - find the difference of integers
* @a: first integer
* @b: second integer
*
* Return: difference of integers
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - find the product of integers
* @a: first integer
* @b: second integer
*
* Return: product of integers
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - divide two integers
* @a: first integer
* @b: second integer
*
* Return: a divided by b
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
* op_mod - find the modulus of two integers
* @a: first integer
* @b: second integer
*
* Return: modulus of two intgers
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
