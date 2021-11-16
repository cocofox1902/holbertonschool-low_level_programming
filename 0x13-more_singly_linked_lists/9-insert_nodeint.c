#include "lists.h"

/**
 * insert_nodeint_at_index - insert a end no
 * @head: list
 * @idx: unsigned int
 * @n: int
 * Return: list
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *end, *tmp = *head;
	unsigned int no = 0;

	end = malloc(sizeof(listint_t));

	if (end == NULL)
		return (NULL);

	end->n = n;

	if (idx == 0)
	{
		end->next = tmp;
		*head = end;
		return (end);
	}

	while (no < (idx - 1))
	{
		if (tmp == NULL || tmp->next == NULL)
			return (NULL);

		tmp = tmp->next;
		no++;
	}

	end->next = tmp->next;
	tmp->next = end;

	return (end);
}
