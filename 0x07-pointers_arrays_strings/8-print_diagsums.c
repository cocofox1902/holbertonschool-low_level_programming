#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints sum of the two diagonals of square matrix integers
 * @a: int
 * @size: int
 * Return: diagonal
 */

void print_diagsums(int *a, int size)
{
	int i, s1, s2;

	for (i = 0; i < size; i++)
	{
		s1 += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		s2 += a[i];
		a -= size;
	}

	printf("%d, %d\n", s1, s2);
}
