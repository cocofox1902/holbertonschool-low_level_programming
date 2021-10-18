#include "main.h"

/**
 * _strpbrk - Write a function that searches a string for any of a set of bytes
 * @s: char
 * @accept: char
 * Return: number of bytes
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
			else
			{
				continue;
			}
		}
		if (accept[j])
		{
			return (s + i);
		}
	}
	return (0);
}
