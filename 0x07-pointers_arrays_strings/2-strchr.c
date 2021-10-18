#include "main.h"

/**
 * _strchr - Write a function that locates a character in a string.
 * @s: char
 * @c: char
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; *(s + i); i++)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	else
	{
		return (0);
	}
}
