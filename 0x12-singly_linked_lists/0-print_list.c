#include "lists.h"

/**
* print_list - print all elements of each struct of a linked list
* @h: pointer to the first struct of a linked list
*
* Return: Number of nodes in the list
*/

size_t print_list(const list_t *h)
{
	unsigned int count;

	count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)");
		}
		else
		{
			printf("[%u] ", h->len);
			printf("%s", h->str);
		}
		printf("\n");
		h = h->next;
		count++;
	}

	return (count);
}
