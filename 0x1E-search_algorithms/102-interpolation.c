#include "search_algos.h"

/**
 * interpolation_search - interpolation search
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value, -1 if not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t before, little, big;
	double index;

	if (array == NULL)
		return (-1);
	little = 0;
	big = size - 1;
	while (size)
	{
		index = (double)(big - little) / (array[big] - array[little]) *
				(value - array[little]);
		before = (size_t)(little + index);
		printf("Value checked array[%d]", (int)before);
		if (before >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[before]);
		}
		if (array[before] == value)
			return ((int)before);
		if (array[before] < value)
		{
			little = before + 1;
		}
		else
		{
			big = before - 1;
		}
		if (little == big)
			break;
	}

	return (-1);
}
