#include "search_algos.h"

/**
 * binary_search - binary search
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: value of value, -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int index;
	size_t i;
	size_t middle = size / 2;

	if (!array || size == 0)
		return (-1);

	printf("Searching in array: ");

	for (i = 0; i < size; i++)
	{
		printf("%d", array[i]);
		if (i < size - 1)
			printf(", ");
	}

	printf("\n");

	if (middle && size % 2 == 0)
		middle--;

	if (value == array[middle])
		return ((int)middle);

	if (value < array[middle])
		return (binary_search(array, middle, value));

	middle++;

	index = (binary_search(array + middle, size - middle, value) + middle);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
