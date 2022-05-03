#include "search_algos.h"

/**
 * exponential_search - exponential search
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 *
 * Return: index of value, -1 if not found
 */

int exponential_search(int *array, size_t size, int value)
{
	int jump = 1;

	if (array == NULL || (int)size == 0)
		return (-1);

	while (array[jump] < value && jump < (int)size)
	{
		printf("Value checked array[%i] = [%i]\n", jump, array[jump]);
		jump *= 2;
	}

	if ((int)size > jump)
	{
		return (exponential_search_second(array, value, jump / 2, jump));
	}
	else
	{
		return (exponential_search_second(array, value, jump / 2, (int)size - 1));
	}
}

/**
 * exponential_search_second - exponential search second
 * @array: array to search
 * @value: value to search for
 * @little: index of first element
 * @big: index of last element
 *
 * Return: index of value, -1 if not found
 */

int exponential_search_second(int *array, int value, int little, int big)
{
	int index, mid;
	int index1 = big;
	int index2 = little;

	if (array == NULL)
		return (-1);

	printf("Value found between indexes [%i] and [%i]\n", little, big);
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
		mid = (int)((index2 + index1) / 2);

		if (value > array[mid])
		{
			index2 = mid + 1;
		}
		else if (value < array[mid])
		{
			index1 = mid - 1;
		}
		else
		{
			return (mid);
		}
	}

	return (-1);
}
