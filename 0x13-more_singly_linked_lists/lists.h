#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* struct listint_s - singly linked list
* @n: integer
* @next: pointer to the next node
*
* Description: singly linked list node structure
*	for Holberton project
*/
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;


/* Task 0 - Print all elements of a listint_t linked list */
/*	and return the number of nodes within */
size_t print_listint(const listint_t *h);

/* Task 1 - Find the number of elements in a listint_t linked list */
size_t listint_len(const listint_t *h);

/* Task 2 - Add a new node to the beginning of a listint_t linked list */
listint_t *add_nodeint(listint_t **head, const int n);

/* Task 3 - Add a new node to the end of a listint_t linked list */
listint_t *add_nodeint_end(listint_t **head, const int n);

/* Task 4 - Free a listint_t list */
void free_listint(listint_t *head);


/* LISTS.H endif */
#endif
