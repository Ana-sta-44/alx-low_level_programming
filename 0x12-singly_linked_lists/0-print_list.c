#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - check the code for my school students.
 * @j: name of the list
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (j)
	{
		if (j->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", j->len, j->str);
		}
		count++;
		j = j-> next;
	}
	return (count);
}
