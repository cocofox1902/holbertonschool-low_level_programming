#include "lists.h"

/**
 * reverse_listint - revesre a list
 * @head: list
 * Return: list reversed
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL, *after = NULL;

	while (*head)
	{
		after = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = after;
	}

	*head = before;
	return (*head);
}
