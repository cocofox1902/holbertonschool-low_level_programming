#include "main.h"
#include <stdlib.h>

int _strlen(char *s);

/**
 * string_nconcat - concatenate
 * @s1: Str
 * @s2: Str
 * @n: unsigned int
 * Return: NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sEnd;
	unsigned int l1, l2, i;

	if (s1 == NULL)
		l1 = 0;
	else
	{
		for (l1 = 0; *(s1 + l1); l1++)
			;
	}
	if (s2 == NULL)
		l2 = 0;
	else
	{
		for (l2 = 0; *(s2 + l2); l2++)
			;
	}
	if (n < l2)
		l2 = n;
	sEnd = malloc(sizeof(char) * (l1 + l2 + 6));
	if (sEnd == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		sEnd[i] = s1[i];
	for (i = 0; i < l2; i++)
		sEnd[l1 + i] = s2[i];
	*(sEnd + l1 + l2) = '\0';
	return (sEnd);
}
