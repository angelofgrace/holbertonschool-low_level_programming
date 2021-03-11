#include "variadic_functions.h"

void print_strings(const char *separator, const unsigned int n,...)
{

	va_list strings, strchk;
	unsigned int i;

	/** Initialize the strings argument pointer variable */
	va_start(strings, n);
	va_start(strchk, n);

	/** Iterate through input strings, printing each, unless NULL */
	for (i = 0; i < n; i++)
	{
		if (va_arg(strchk, char *) != NULL)
		{
			printf("%s", va_arg(strings, char *));
		}
		else
		{
			va_arg(strings, char *);
			printf("(nil)");
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(strings);

}
