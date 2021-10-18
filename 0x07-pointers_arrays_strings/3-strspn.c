#include "main.h"

/**
 * _strspn - Write a function that gets the length of a prefix substring.
 * @s: char
 * @accept: char
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
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
		}
		if (accept[j] == 0)
		{
			break;
		}
	}
	return (i);
}
