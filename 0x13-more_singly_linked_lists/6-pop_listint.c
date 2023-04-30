#include "lists.h"
#include <stdio.h>

/**
 * pop_listint - deletes the head node of listint_t linked list
 * @head: a pointer
 *
 * Return: Nothing
 */
int pop_listint(listint_t **head)
{
	listint_t *start;
	int p;

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	p = start->p;
	free(start);
	return (p);
}
