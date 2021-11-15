#include "lists.h"

/**
 * add_nodeint - add a node
 * @head: list
 * @n: constant
 * Return: list with a node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (struct listint_s *)malloc(sizeof(struct listint_s));

	if (new_node == NULL)
		return NULL;

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
