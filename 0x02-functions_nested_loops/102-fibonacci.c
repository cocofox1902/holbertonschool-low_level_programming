#include <stdio.h>

/**
 * main - adition
 *
 * Return: 0
 */

int main(void)
{
	long int a = 0;
	long int b = 1;
	long int c;
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
