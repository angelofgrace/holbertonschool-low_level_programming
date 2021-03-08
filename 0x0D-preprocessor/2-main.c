#include <stdio.h>

/**
* main - Use FILE macro to print current file name
*
* Return: 0 on success
*/

int main(void)
{
	printf("\"%s\"\n", __FILE__);

	return (0);
}
