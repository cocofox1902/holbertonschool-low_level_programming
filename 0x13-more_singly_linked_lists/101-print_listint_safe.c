#include "lists.h"

/**
 * print_listint_safe - print list
 * @head: list
 * Return: nb of node
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nb;
	const listint_t *temp;

	temp = head;
	for (nb = 0; head && test_same(temp, head, nb); nb++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	if (head)
		printf("-> [%p] %d\n", (void *)head, head->n);

	return (nb);
}

/**
 * teast_same - infinit loop test
 * @head: const
 * @tested: const
 * @i: size_t
 * Return: 0 or 1
 */

int test_same(const listint_t *head, const listint_t *tested, size_t i)
{
	size_t numb = 0;

	while (head != tested)
	{
		head = head->next;
		numb++;
	}

	if (numb == i)
		return (1);

	return (0);
}
