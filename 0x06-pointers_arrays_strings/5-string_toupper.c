#include "main.h"
#include <stdio.h>

/**
 * string_toupper - Main
 * @s: char string
 * Return: return
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
