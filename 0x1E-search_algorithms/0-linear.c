#include "search_algos.h"

/**
 * linear_search - linear search
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value, -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (!array || size == 0)
		return (-1);

	while (index < size)
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		index++;
	}
	return (-1);
}
