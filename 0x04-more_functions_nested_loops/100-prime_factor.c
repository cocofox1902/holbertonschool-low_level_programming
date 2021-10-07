#include "main.h"

/**
 * main - Main
 * Return: multipe
 */

int main(void)
{
	long int a = 612852475143;
	long int pf = 2;
	int b = 0;

	while (a > 1)
	{
		while (a % pf == 0)
		{
			b = pf;
			a = a / pf;
		}
		pf++;
	}
	printf("%lu", b);
	return (0);
}
