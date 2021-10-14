#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Main
 * @dest: char string
 * @src: char string
 * @n: int
 * Return: return
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
