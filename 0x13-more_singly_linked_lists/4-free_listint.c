#include "lists.h"

/**
* free_listint - Free all elements of a listint_t list
* @head: pointer to the first node of a linked list
*
* Return: void
*/

void free_listint(listint_t *head)
{
	list_t *i_node;

	while (head != NULL)
	{
		i_node = head->next;
		free(head);
		head = i_node;
	}

}
