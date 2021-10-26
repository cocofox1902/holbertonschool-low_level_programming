#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Write a function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: int
 * @c: str
 * Return: v
 */

char *create_array(unsigned int size, char c)
{
	unsigned int s = 0;
	char *v;

	v = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		for (s = 0; s < size; s++)
		{
			v[s] = c;
		}
	}

	return (v);
}
