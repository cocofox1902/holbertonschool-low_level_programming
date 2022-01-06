#include "lists.h"

/**
 * insert_dnodeint_at_index - list
 * @h: list
 * @idx: unsigned int
 * @n: int
 *
 * Return: list
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *head;

	if (idx == 0)
		return (add_dnodeint(h, n));

	head = *h;

	for (; idx != 1; idx--)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}

		new_node = malloc(sizeof(dlistint_t));

	if (head->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node->n = n;
	new_node->next = head;
	new_node->prev = head->prev;
	head->prev->next = new_node;
	head->prev = new_node;

	return (new_node);
}
