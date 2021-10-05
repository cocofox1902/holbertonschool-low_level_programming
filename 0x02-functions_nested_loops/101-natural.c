#include <stdio.h>

/**
 * main - adition
 *
 * Return: 0
 */

int main(void)
{
	int i, b = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			b += i;
	}

	printf("%d\n", b);

	return (0);
}
