#include "lists.h"

/**
 * print_listint_safe - print list
 * @head: list
 * Return: nb of node
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node_nb = 0;
	int looptest = 0;

	while (head)
	{
		looptest = head - head->next;
		printf("[%p] %d\n", (void *)head, head->n);
		node_nb++;

		if (looptest > 0)
		{
			head = head->next;
		}
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (node_nb);
}
