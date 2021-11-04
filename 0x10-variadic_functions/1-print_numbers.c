#include "variadic_functions.h"

/**
 * print_numbers - print number
 * @separator: const str
 * @n: const unsigned int
 * Return: NULL
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nb;
	unsigned int i;

	va_start(nb, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nb, int));
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nb);
}
