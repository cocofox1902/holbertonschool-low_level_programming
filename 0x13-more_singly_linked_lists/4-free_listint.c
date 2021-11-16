#include "lists.h"

/**
 * free_listint - free the list
 * @head: list
 * Return: list free
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
