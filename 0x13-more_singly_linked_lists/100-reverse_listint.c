#include "lists.h"

/**
 * reverse_listint - revesre a list
 * @head: list
 * Return: list reversed
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *end = *head;
	unsigned int n = 0;

	if (end == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(end);
		return (1);
	}

	while (n < (index - 1))
	{
		if (end->next == NULL)
			return (-1);

		end = end->next;
		n++;
	}

	temp = end->next;
	end->next = temp->next;

	free(temp);
	return (1);
}
