#include "lists.h"

/**
 * delete_dnodeint_at_index - list
 * @head: list
 * @index: unsigned int
 *
 * Return: list
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	current = *head;
	for (i = 1; current != NULL && i <= index; i++)
		current = current->next;
	if (current == NULL)
		return (-1);

	if (*head == NULL || current == NULL)
		return (-1);
	if (*head == current)
		*head = current->next;

	if (current->next != NULL)
		current->next->prev = current->prev;

	if (current->prev != NULL)
		current->prev->next = current->next;
	free(current);
	return (1);
}
