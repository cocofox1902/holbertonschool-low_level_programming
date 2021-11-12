#include "lists.h"

/**
 * add_node - add new node at the beginning
 * @head: list
 * @str: constant
 * Return: new node at hte beginning
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int lenght;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (lenght = 0; str[lenght]; lenght++)
		;

	new->str = dup;
	new->len = lenght;
	new->next = *head;

	*head = new;

	return (new);
}
