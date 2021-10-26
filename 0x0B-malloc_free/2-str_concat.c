#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - rite a function that concatenates two strings.
 * @s1: str
 * @s2: str
 * Return: return
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int s = 0, d = 0;
	char *v;

	if (s1 == NULL && s2 == NULL)
	{
		v = malloc(1);
		return (v);
	}
	if (s1 != NULL)
	{
		for (s = 0; s1[s]; s++)
			continue;
	}
	if (s2 != NULL)
	{
		for (d = 0; s2[d]; d++)
			continue;
	}
	v = (char *)malloc((s * sizeof(char)) + (d * sizeof(char) + 1));
	if (v == NULL)
		return (NULL);
	if (s1 != NULL)
	{
		for (s = 0; s1[s]; s++)
			v[s] = s1[s];
	}
	if (s2 != NULL)
	{
		for (d = 0; s2[d]; d++)
		{
			v[s] = s2[d];
			s++;
		}
	}
	return (v);
}
