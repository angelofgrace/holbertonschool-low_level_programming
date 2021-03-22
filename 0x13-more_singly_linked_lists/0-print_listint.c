#include "lists.h"

/**
* print_listint - Print all elements of a linked list and count the nodes
* @h: pointer to the first node in the linked list
*
* Return: An unsigned integer which is the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	unsigned long int count;

	count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
