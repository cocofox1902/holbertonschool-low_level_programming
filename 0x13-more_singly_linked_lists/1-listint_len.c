#include "lists.h"

/**
 * listint_len - print lenght list
 * @h: pointer of list
 * Return: lenght list
 */

size_t listint_len(const listint_t *h)
{
	size_t n;

	for (n = 0; h; n++)
		h = h->next;

	return (n);
}
