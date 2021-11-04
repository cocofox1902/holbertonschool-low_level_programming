#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - operation all int
 * @n: const unsigned int
 * Return: total
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nb;
	unsigned int i, ope = 0;

	va_start(nb, n);
	for (i = 0; i < n; i++)
		ope += va_arg(nb, int);
	va_end(nb);
	return (ope);
}
