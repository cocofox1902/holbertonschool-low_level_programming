#include "search_algos.h"

/**
 * jump_search - jump search
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: value of value, -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	int index = 0, k = 0, before = 0, m = 0;

	if (!array || size == 0)
		return (-1);

	m = (int)sqrt((double)size);

	while (index < (int)size && array[index] < value)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return (index);
		k++;
		before = index;
		index = k * m;
	}

	printf("Value found between indexes [%d] and [%d]\n", before, index);

	for (before; before <= index && before < (int)size; before++)
	{
		printf("Value checked array[%d] = [%d]\n", before, array[before]);
		if (array[before] == value)
			return (before);
	}

	return (-1);
}
