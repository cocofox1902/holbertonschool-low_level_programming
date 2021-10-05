#include <stdio.h>

/**
 * main - adition
 *
 * Return: 0
 */

int main(void)
{
	int a = 0;
	int b = 1;
	int c;
	int i;

	for (i = 0; i < 50; i++)
	{
		if (i <= 1)
		{
			c = i;
		}
		else
		{
			c = a + b;
			a = b;
			b = c;
		}
		printf("%d\n", c);
	}
	return (0);
}
