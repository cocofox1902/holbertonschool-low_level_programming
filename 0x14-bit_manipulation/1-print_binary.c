#include "main.h"

/**
 * print_binary - convert into binary
 * @n: coonstant
 * Return: binary
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
