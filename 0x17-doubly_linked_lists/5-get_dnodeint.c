#include "lists.h"

/**
 * get_dnodeint_at_index - list
 * @head: list
 * @index: unsigend int
 *
 * Return: list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t n;

	for (n = 0; head; n++)
	{
		if (n == index)
			return (head);
		head = head->next;
	}
	return (NULL);
}
