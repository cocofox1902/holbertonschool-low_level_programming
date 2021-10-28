#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p = NULL;
	int i;

	p = malloc(nmemb * size + 1);
	if (p == NULL)
	{
		free(p);
		exit(98);
	}
	for (i = 0; p[i] != '\0'; i++)
	{
		p[i] = 0;
		continue;
	}
	return (p);
}
