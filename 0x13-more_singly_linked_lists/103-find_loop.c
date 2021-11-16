#include "lists.h"

/**
 * find_listint_loop - find loop
 * @head: list
 * Return: node of the loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slowly = head;
	listint_t *speed = head;

	if (!head)
		return (NULL);

	while (slowly && speed && speed->next)
	{
		speed = speed->next->next;
		slowly = slowly->next;
		if (speed == slowly)
		{
			slowly = head;
			while (slowly != speed)
			{
				slowly = slowly->next;
				speed = speed->next;
			}
			return (speed);
		}
	}

	return (NULL);
}
