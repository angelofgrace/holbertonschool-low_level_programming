#include "lists.h"

/**
* list_len - Find the number of nodes in a linked list
* @h: pointer to the first element of the linked list
*
* Return: number of nodes in the linked list
*/

size_t list_len(const list_t *h)
{
	unsigned int count;

	count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
