#include "main.h"
#include <stdio.h>

/**
 * _strncat - Main
 * @dest: char string
 * @src: char string
 * @n: int
 * Return: return
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b, counter = 0;

	for (a = 0; dest[a] != '\0'; a++)
	{
		counter++;
	}
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[counter + b] = src[b];
	}
	dest[counter + b] = '\0';
	return (dest);
}
