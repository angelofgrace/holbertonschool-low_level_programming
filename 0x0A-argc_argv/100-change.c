#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

	int pay, coin;

	pay = (atoi(argv[1]));

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (pay < 0)
	{
		printf("0\n");
		return (0);
	}

	while(pay >= 25)
	{
		pay = pay -25;
		coin ++;
	}
	while(pay >= 10)
	{
		pay = pay - 10;
		coin++;
	}
	while(pay >= 5)
	{
		pay = pay - 5;
		coin++;
	}
	while(pay >= 2)
	{
		pay = pay -2;
		coin++;
	}
	while(pay >= 1)
	{
		pay = pay - 1;
		coin++;
	}

	printf("%d\n", coin);
	return (0);
}
