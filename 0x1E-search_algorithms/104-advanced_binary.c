#include "search_algos.h"

/**
 * advanced_binary - advenced binary
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value or -1 if not found
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (advanced_binary_second(array, value, 0, (int)size - 1));
}

/**
 * advanced_binary_second - binary search
 * @array: array to search
 * @value: value to search for
 * @start: start index
 * @end: end index
 * Return: index of value or -1 if not found
 */

int advanced_binary_second(int *array, int value, int start, int end)
{
	int index, middle;
	int index1 = end;
	int index2 = start;

	if (array == NULL)
		return (-1);

	while (index2 <= index1)
	{
		printf("Searching in array:");
		for (index = index2; index <= index1; index++)
		{
			printf(" %i", array[index]);
			if (index != index1)
				printf(",");
		}
		printf("\n");

		middle = (int)((index2 + index1) / 2);

		if (value > array[middle])
			index2 = middle + 1;
		else if (value < array[middle])
			index1 = middle - 1;
		else
		{
			if (value == array[middle - 1])
				return (advanced_binary_second(array, value, index2, middle));
			else
				return (middle);
		}
	}

	return (-1);
}
