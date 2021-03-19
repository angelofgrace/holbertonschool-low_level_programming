#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* struct list_s - singly linked list
* @str: string - (malloc'ed string)
* @len: length of the string
* @next: points to the next node
*
* Description: singly linked list node structure
* for Holberton project
*/

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* Print all the elements of a list_t list */
size_t print_list(const list_t *h);

/* Find the number of elements in a linked list_t list */
size_t list_len(const list_t *h);

/* Add a new node to the begginning of a list_t linked list */
list_t *add_node(list_t **head, const char *str);

/* Add a new node to the end of a list_t linked list */
list_t *add_node_end(list_t **head, const char *str);

/* Free a list_t linked list */
void free_list(list_t *head);

/* Find the length of a string of characters */
unsigned int _strlen(char *s);

#endif
