#include <stdio.h>
#include <stdlib.h>

/**
* main - Make change for an input number of cents
* @argc: number of command ling arguments
* @argv: array containing all command line arguments
*
* Return: 1 if Error, 0 if successful printing
*/

int main(int argc, char *argv[])
{
	int pay, coin;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	pay = (atoi(argv[1]));
	if (pay < 0)
	{
		printf("0\n");
		return (0);
	}
	while (pay >= 25)
	{
		pay = pay - 25;
		coin++;
	}
	while (pay >= 10)
	{
		pay = pay - 10;
		coin++;
	}
	while (pay >= 5)
	{
		pay = pay - 5;
		coin++;
	}
	while (pay >= 2)
	{
		pay = pay - 2;
		coin++;
	}
	while (pay >= 1)
	{
		pay = pay - 1;
		coin++;
	}
	printf("%d\n", coin);
	return (0);
}
