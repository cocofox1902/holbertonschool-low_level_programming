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
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size * nmemb; i++)
	{
		p[i] = 0;
		continue;
	}
	return (p);
}
