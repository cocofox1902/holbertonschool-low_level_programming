#include "lists.h"

/**
 * add_dnodeint_end - list
 * @head: list
 * @n: const int
 *
 * Return: list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *ptr;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->prev = NULL;
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		ptr = *head;

		while (ptr->next != NULL)
			ptr = ptr->next;

		ptr->next = new_node;
		new_node->prev = ptr;
	}

	return (*head);
}
