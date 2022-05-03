#include "search_algos.h"

/**
 * jump_list - jump list
 *
 * @list: list to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value or -1 if not found
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *temporary = list;
	listint_t *forward = NULL;
	listint_t *before = NULL;
	size_t after;

	if (!list || size == 0)
		return (NULL);

	after = sqrt(size);

	while (temporary)
	{
		before = temporary;
		while (temporary->next && temporary->index < after)
			temporary = temporary->next;
		printf("Value checked at index [%lu] = [%d]\n",
			   temporary->index, temporary->n);
		if (temporary->n >= value || temporary->index == size - 1)
		{
			forward = temporary;
			printf("Value found between indexes [%lu] and [%lu]\n",
				   before->index, forward->index);
			break;
		}
		after += sqrt(size);
	}

	while (before && before->index <= forward->index)
	{
		printf("Value checked at index [%lu] = [%d]\n",
			   before->index, before->n);
		if (before->n == value)
			return (before);
		before = before->next;
	}
	return (NULL);
}
