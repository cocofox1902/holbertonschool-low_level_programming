#include "lists.h"

/**
 * dlistint_len - list
 * @h: list
 *
 * Return: list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	for (n = 0; h; n++)
	{
		h = h->next;
	}
	return (n);
}
