#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_v - Write a function that creates an v of chars,
 * and initializes it with a specific char.
 * @size: int
 * @c: str
 * Return: v
 */

char *create_array(unsigned int size, char c)
{
	char *v;
	unsigned int j = 0;

	if (size == 0)
	{
		return (NULL);
	}

	v = (char *)malloc(sizeof(char) * size);

	if (v == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < size; j++)
	{
		*(v + j) = c;
	}
	return (v);
}
