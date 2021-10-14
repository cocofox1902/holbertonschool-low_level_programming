#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: char string
 * @src: char string
 */

void reverse_array(int *a, int n)
{
	int counter = 0;
	int i;

	n--;
	for (i = 0; counter < +n; i++, n--)
	{
		i = *(a + counter);
		*(a + counter) = *(a + n);
		*(a + n) = i;
	}
}
