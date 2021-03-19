#include "lists.h"

/**
* add_node_end - Add a node to the end of a linked list
* @head: pointer to a pointer to the first node in the linked list
* @str: data to input to the new node
*
* Return: pointer to the new node of the linked list
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *i_node;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = _strlen(new->str);

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


/**
* _strlen - find the length of a string of characters
* @s: a string of characters in an array
*
* Return: the number of characters in input string (minus null val), as integer
*/


unsigned int _strlen(char *s)
{
	unsigned int x;

	x = 0;

	while (*s != '\0')
	{
		s++;
		x++;
	}

return (x);
}

