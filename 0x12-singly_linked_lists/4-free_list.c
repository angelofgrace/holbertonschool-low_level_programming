#include "lists.h"

/**
* free_list - Free each element of a linked list
* @head: pointer to the first element of a linked list
*
* Return: void
*/

void free_list(list_t *head)
{
	list_t *i_node;

	while (head != NULL)
	{
		i_node = head->next;
		free(head->str);
		free(head);
		head = i_node;
	}
}
