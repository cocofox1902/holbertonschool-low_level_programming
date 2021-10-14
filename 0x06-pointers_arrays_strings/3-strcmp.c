#include "main.h"
#include <stdio.h>

/**
 * _strcmp - concatenates two strings
 * @dest: char string
 * @src: char string
 */

int _strcmp(char *s1, char *s2)
{
	int counter = 0;

	for (counter = 0; s1[counter] && s2[counter] != '\0'; counter++)
	{
		if (s1[counter] != s2[counter])
		{
			return (s1[counter] - s2[counter]);
		}
	}
	return (0);
}
