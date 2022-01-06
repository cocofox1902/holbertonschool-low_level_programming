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

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	head = *h;

	for (; idx != 1; idx--)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}

	if (head->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	head->prev->next = new_node;
	new_node->next = head;
	new_node->prev = head->prev;
	head->prev = new_node;

	if (h == NULL)
		return (NULL);

	return (new_node);
}
