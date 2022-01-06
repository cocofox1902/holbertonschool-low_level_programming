#include "lists.h"

/**
 * print_dlistint - list
 * @h: list
 *
 * Return: list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	for (n = 0; h; n++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
