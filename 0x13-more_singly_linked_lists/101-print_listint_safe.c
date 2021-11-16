#include "lists.h"

/**
 * print_listint_safe - print list
 * @head: list
 * Return: nb of node
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nb = 0;
	long int dif;

	if (head == NULL || head->next == NULL)
		return (0);

	while (head)
	{
		dif = head - head->next;
		nb++;
		printf("[%p] %d", (void *)head, head->n);
		printf("\n");
		if (dif > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d", (void *)head->next, head->next->n);
			printf("\n");
			break;
		}
	}

	return (nb);
}
