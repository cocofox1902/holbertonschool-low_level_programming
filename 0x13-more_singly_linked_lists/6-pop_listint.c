#include "lists.h"

/**
 * pop_listint - delete head node
 * @head: list
 * Return: list head deleted
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int lesshead;

	if (*head == NULL)
		return (0);

	temp = *head;
	lesshead = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (lesshead);
}
