#include "main.h"

/**
 * print_square - print square
 * @size: int
 * Return: multipe
 */

void print_square(int size)
{
	int a = 0;
	int b;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			b = size;
			while (b > 0)
			{
				_putchar('#');
				b--;
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
