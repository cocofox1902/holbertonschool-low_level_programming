#include "main.h"

/**
 * print_square - print square
 * @size: int
 * Return: multipe
 */

void print_triangle(int size)
{
	int a = 1;
	int b;

	if (size != 0)
	{
		while (a <= size)
		{
			b = 0;
			while (b <= size - a)
			{
				_putchar(' ');
				b++;
			}
			while (b <= size)
			{
				_putchar('#');
				b++;
			}
			a++;
			printf("\n");
		}
	}
	else
	{
		printf("\n");
	}
}
