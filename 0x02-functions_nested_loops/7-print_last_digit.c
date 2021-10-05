#include "main.h"

/**
 * _abs - absolut
 *
 * @n: variable
 *
 * Return: absolut
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
