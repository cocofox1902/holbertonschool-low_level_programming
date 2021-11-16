#include "lists.h"

/**
 * add_nodeint_end - add a node at the end of a list
 * @head: list
 * @n: constant
 * Return: list with new node at new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last_node = *head;
	listint_t *new_node;

	new_node = (struct listint_s *)malloc(sizeof(struct listint_s));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{

		while (last_node->next != NULL)
			last_node = last_node->next;

		last_node->next = new_node;
	}
	return (last_node);
}
