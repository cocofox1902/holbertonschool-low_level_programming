#include "main.h"
#include <stdlib.h>

char *_memcpy(char *dest, char *src, unsigned int n);

/**
 * _realloc - allocate memory
 * @ptr: void
 * @old_size: unsigned int
 * @new_size: unsigned int
 * Return: NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	p = malloc(new_size);
	if (p == NULL)
		return (NULL);

	_memcpy(p, ptr, old_size);
	free(ptr);

	return (p);
}

/**
 * _memcpy - Write a function that copies memory area.
 * @dest: char
 * @src: char
 * @n: unsigned int
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
