#include "lists.h"

/**
* listint_len - Find the number of elements in a linked list
* @h: pointer to the first node of a linked list
*
* Return: the number of nodes, or elements, in a linked list
*/

size_t listint_len(const listint_t *h)
{
	unsigned long int count;

	count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
