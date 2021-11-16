#include "lists.h"

/**
 * get_nodeint_at_index - addition node
 * @head: list
 * @n: unsigned int
 * Return: total node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index; n++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
