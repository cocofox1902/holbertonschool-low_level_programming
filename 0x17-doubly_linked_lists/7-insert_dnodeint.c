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

	if (*h == NULL)
	{
		return (NULL);
	}

	head = *h;

	new_node = malloc(sizeof(dlistint_t));

	while (idx != 0)
	{
		idx--;
		head = head->next;
	}

	new_node->n = n;
	new_node->next = head;
	new_node->prev = head->prev;
	head->prev->next = new_node;
	head->prev = new_node;

	return (*h);
}
