#include "lists.h"

/**
 * sum_listint - addition node
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
