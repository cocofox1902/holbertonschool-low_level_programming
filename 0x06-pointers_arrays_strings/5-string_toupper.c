#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: char string
 * @src: char string
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
