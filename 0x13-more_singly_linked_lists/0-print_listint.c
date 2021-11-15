#include "lists.h"

/**
 * print_listint - print element of a list
 * @h: pointer of list
 * Return: n
 */

size_t print_listint(const listint_t *h)
{
	size_t n;

	for (n = 0; h; n++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
