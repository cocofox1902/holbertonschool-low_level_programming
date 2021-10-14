#include "main.h"
#include <stdio.h>

/**
 * _strcat - Main
 * @dest: char string
 * @src: char string
 * Return: return
 */

char *_strcat(char *dest, char *src)
{
	int a, b, counter = 0;

	for (a = 0; dest[a] != '\0'; a++)
	{
		counter++;
	}
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[counter + b] = src[b];
	}
	dest[counter + b] = '\0';
	return (dest);
}
