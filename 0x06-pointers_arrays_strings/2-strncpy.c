#include "main.h"
#include <stdio.h>

/**
 * _strncpy - concatenates two strings
 * @dest: char string
 * @src: char string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int counter = 0;

	for (counter = 0; counter < n && src[counter] != '\0'; counter++)
	{
		*(dest + counter) = src[counter];
	}
	for (counter = counter; counter < n; counter++)
	{
		dest[counter] = '\0';
	}
	return (dest);
}