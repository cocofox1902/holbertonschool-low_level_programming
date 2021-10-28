#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocate memory
 * @b: unsigned int
 * Return: p
 */

void *malloc_checked(unsigned int b)
{
	void *p = NULL;

	p = malloc(b);
	if (p == NULL)
	{
		free(p);
		exit(98);
	}

	return (p);
}
