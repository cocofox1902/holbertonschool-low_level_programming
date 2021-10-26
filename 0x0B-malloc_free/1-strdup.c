#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Write a function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: str
 * Return: v
 */

char *_strdup(char *str)
{
	unsigned int s;
	char *v;

	if (str == NULL)
	{
		return (NULL);
	}

	for (s = 0; str[s]; s++)
	{
		continue;
	}

	v = (char *)malloc(s * sizeof(char) + 1);

	if (v == NULL)
	{
		return (NULL);
	}

	for (s = 0; str[s]; s++)
	{
		v[s] = str[s];
	}

	return (v);
}
