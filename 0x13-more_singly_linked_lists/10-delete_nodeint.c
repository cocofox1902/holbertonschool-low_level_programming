#include "lists.h"

/**
 * delete_nodeint_at_index - delet head list x time
 * @head: list
 * @index: unsigned int
 * Return: list without head
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *dbl = *head;
	unsigned int n = 0;

	if (dbl == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(dbl);
		return (1);
	}

	while (n < index--)
	{
		if (dbl->next == NULL)
			return (-1);
		dbl = dbl->next;
		n++;
	}

	temp = dbl->next;
	dbl->next = temp->next;

	free(temp);
	return (1);
}
