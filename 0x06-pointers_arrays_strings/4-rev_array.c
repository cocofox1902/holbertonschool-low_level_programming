#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Main
 * @a: char string
 * @n: char string
 * Return: return
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
