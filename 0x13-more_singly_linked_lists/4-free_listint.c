#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of a list
 * @head: list
 * @n: constant
 * Return: list with new node at new node
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