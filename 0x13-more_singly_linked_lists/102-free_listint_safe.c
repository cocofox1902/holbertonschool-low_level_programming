#include "lists.h"

/**
 * free_listint_safe - free list
 * @h: list
 * Return: list free
 */

size_t free_listint_safe(listint_t **h)
{
	size_t lenght = 0;
	int taille;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		taille = *h - (*h)->next;
		if (taille > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			lenght++;
		}
		else
		{
			free(*h);
			*h = NULL;
			lenght++;
			break;
		}
	}

	*h = NULL;

	return (lenght);
}
