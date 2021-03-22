#include "lists.h"

/**
* add_nodeint_end - Add a new node to the end of a listint_t list
* @head: pointer to a pointer to the first node of a linked list
* @n: integer data to add to the new node
*
* Return: pointer to the new final element of a listint_t list
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *i_node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	else
	{
		i_node = *head;

		while (i_node->next != NULL)
		{
			i_node = i_node->next;
		}
		i_node->next = new;
		return (i_node);
	}
}
