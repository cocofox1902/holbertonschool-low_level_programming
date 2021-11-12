#include "lists.h"

/**
 * free_list - free list_t
 * @head: pointer to list
 * Return: list free
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
