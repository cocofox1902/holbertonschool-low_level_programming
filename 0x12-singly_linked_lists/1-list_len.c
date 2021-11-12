#include "lists.h"

/**
 * list_len - print elements of a list
 * @h: constant
 * Return: the node
 */

size_t list_len(const list_t *h)
{
	size_t node;

	for (node = 0; h; node++)
	{
		h = h->next;
	}
	return (node);
}
