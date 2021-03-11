#include "variadic_functions.h"

/**
* sum_them_all - find the sum of any number of integers
* @n: number of arguments to follow
*
* Return: integer sum of all input integers
*/

int sum_them_all(const unsigned int n, ...)
{

	va_list nums;
	unsigned int i;
	int sum;

	/** initializing argument list */
	va_start(nums, n);

	sum = 0;

	/** iterate through arguments */
	for (i = 0; i < n; i++)
	{
		/** increase sum by current argument value */
		sum += va_arg(nums, int);
	}

	va_end(nums);
	return (sum);

}
