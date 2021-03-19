#include "lists.h"

/**
* add_node - add a new node to the begginning of a linked list
* @head: pointer to a pointer to the first element of a linked list
* @str: string data to input to the new node
*
* Return: pointer to the new first element of the linked list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = _strlen(new->str);
	new->next = *head;
	*head = new;

	return (*head);
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
