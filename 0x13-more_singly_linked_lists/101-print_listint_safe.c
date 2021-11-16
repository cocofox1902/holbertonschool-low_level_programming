#include "lists.h"

/**
 * print_listint_safe - print list
 * @head: list
 * Return: nb of node
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node_nb = 0;
	long int looptest;

	while (head)
	{
		looptest = head - head->next;
		node_nb++;
		printf("[%p] %d\n", (void *)head, head->n);

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
