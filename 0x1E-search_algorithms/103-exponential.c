#include "search_algos.h"

/**
 * exponential_search - exponential search
 *
 * the exponential search algorithm
 * @array: array to search the value in
 * @size: size of the array
 * @value: value to look for
 *
 * Return: index or 1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t first, last, index;

	if (!array || size == 0)
		return (-1);

	last = 1;
	first = 1;
	while (last < size)
	{
		if (value < array[last])
			break;
		printf("Value checked array[%lu] = [%d]\n", last, array[last]);
		first = last;
		last = last * 2;
	}
	index = last < size - 1 ? last : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", first, index);
	return (help_binary(array, value, last / 2, index));
}

/**
 * exponential_search_second - exponential search second
 *
 * @array: array to search the value in
 * @value: value to look for
 * @lo: index of the low bound
 * @hi: index of the high bound
 *
 * Return: index or 1
 */

int exponential_search_second(int *array, int value, size_t lo, size_t hi)
{
	size_t mid;

	array_print(array, lo, hi);
	if (hi == lo && array[lo] != value)
		return (-1);

	mid = ((hi - lo) / 2) + lo;
	if (array[mid] == value)
		return (mid);
	if (array[mid] > value)
		return (help_binary(array, value, lo, mid - 1));
	if (array[mid] < value)
		return (help_binary(array, value, mid + 1, hi));
	return (-1);
}

/**
 * exponential_search_third - exponential search third
 * @array: array to print
 * @lo: index of the low bound
 * @hi: index of the high bound
 * Return: void
 */

void exponential_search_third(int *array, size_t lo, size_t hi)
{
	size_t index;

	printf("Searching in array: ");
	for (index = lo; index <= hi; index++)
	{
		printf("%d", array[index]);
		if (index < hi)
			printf(", ");
	}
	printf("\n");
}
