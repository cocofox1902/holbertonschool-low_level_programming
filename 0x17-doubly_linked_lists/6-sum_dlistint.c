#include "lists.h"

/**
 * sum_dlistint - list
 * @head: list
 *
 * Return: list
 */

int sum_dlistint(dlistint_t *head)
{
	int total = 0;

	while (head != NULL)
	{
		total += head->n;
		head = head->next;
	}
	return (total);
}
