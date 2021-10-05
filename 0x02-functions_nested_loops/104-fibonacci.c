#include <stdio.h>

/**
 * main - adition
 *
 * Return: 0
 */

int main(void)
{
	unsigned long int a = 0;
	unsigned long int b = 1;
	unsigned long int c, m1a, m2a, m1b, m2b, ma, mb;
	int i;

	for (i = 2; i < 92; i++)
	{

		c = a + b;
		printf("%lu, ", c);
		a = b;
		b = c;
	}
	m1a = a / 10000000000;
	m1b = b / 10000000000;
	m2a = a % 10000000000;
	m2b = b % 10000000000;

	for (i = 93; i < 99; i++)
	{
		ma = m1a + m1b;
		mb = m2a + m2b;
		if ((m2a + m2b) > 9999999999)
		{
			ma += 1;
			mb %= 10000000000;
		}
		printf("%lu%lu", ma, mb);
		if (i != 98)
		{
			printf(", ");
		}
		m1a = m1b;
		m2a = m2b;
		m1b = ma;
		m2b = mb;
	}
	printf("\n");
	return (0);
}
