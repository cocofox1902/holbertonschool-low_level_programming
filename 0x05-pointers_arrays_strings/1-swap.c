#include "main.h"

/**
 * swap_int - points swap
 * @a: int
 * @b: int
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
