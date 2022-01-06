#include "lists.h"

/**
 * free_dlistint - list
 * @head: list
 *
 * Return: list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		dlistint_t *next = current->next;

		free(current);
		current = next;
	}
}
