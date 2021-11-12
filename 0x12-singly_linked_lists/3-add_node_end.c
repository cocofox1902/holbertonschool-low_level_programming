#include "lists.h"

/**
 * add_node_end - add new node at the beginning
 * @head: list
 * @str: constant
 * Return: new node at hte beginning
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int lenght;
	list_t *new, *end;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (lenght = 0; str[lenght]; lenght++)
		;

	new->str = dup;
	new->len = lenght;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		end = *head;
		while (end->next != NULL)
			end = end->next;
		end->next = new;
	}

	return (*head);
}
