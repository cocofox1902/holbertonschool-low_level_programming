#include "main.h"

/**
 * print_rev - print a string in reverse
 * @s: char
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int left, right, j, temp, len;

	for (len = 0; s[len] != '\0'; len++)
	{
		continue;
	}
	left = 0;
	right = len - 1;

	for (j = left; j < right; j++)
	{
		temp = s[len];
		s[len] = s[right];
		s[right] = temp;
		right--;
		_putchar(temp);
	}
}
