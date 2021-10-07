#include "main.h"

/**
 * print_triangle - print triangle
 * @size: int
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
	printf("%d", b);
	return (0);
}
