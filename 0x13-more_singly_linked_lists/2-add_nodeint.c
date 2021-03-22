#include "lists.h"

/**
* add_nodeint - Add a node to the beginning of a listint_t list
* @head: pointer to a pointer to the beginning of a linked list
* @n: integer data to add to the new node
*
* Return: pointer to the new first element of a listint_t list
*
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	while (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
