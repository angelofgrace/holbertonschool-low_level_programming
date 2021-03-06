#include "lists.h"

/**
* free_listint2 - Free all elements of a listint_t list
* @head: pointer to a pointer to the first node of a linked list
*
* Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *i_node;

	if (head == NULL)
	{
		return (NULL);
	}

	while (*head != NULL)
	{
		i_node = (*head)->next;
		free(*head);
		*head = i_node;
	}

	head = NULL;
}
