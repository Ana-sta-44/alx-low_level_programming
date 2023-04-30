#include "lists.h"

/**
 * sum_listint - sum all the data (n) of a listint_t
 * @head: pointer to the node
 *
 * Return: sum all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
