#include "lists.h"

/**
 * get_nodeint_at_index - addition node
 * @head: list
 * Return: total node
 */

int sum_listint(listint_t *head)
{
	int total = 0;

	while (head)
	{
		total += head->n;
		head = head->next;
	}

	return (total);
}