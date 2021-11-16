#include "lists.h"

/**
 * print_listint_safe - print list
 * @head: list
 * Return: nb of node
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t number_of_nodes = 0;
	long int looptest = 0;

	while (head)
	{
		looptest = head - head->next;
		number_of_nodes++;
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

	return (number_of_nodes);
}
