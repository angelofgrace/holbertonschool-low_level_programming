#include "variadic_functions.h"

/**
* print_numbers - Print each input integer followed by input separator
* @separator: character string to be printed
* @n: number of integer arguments to be passed to function
*
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list nums;
	unsigned int i;

	/** Initialize list of numbers */
	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(nums, int));

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
