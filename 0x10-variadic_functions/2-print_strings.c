#include "variadic_functions.h"

/**
 * print_strings - print str
 * @separator: const str
 * @n: const unsigned int
 * @...: var
 * Return: NULL
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str1;
	char *str2;
	unsigned int i;

	va_start(str1, n);
	for (i = 0; i < n; i++)
	{
		str2 = va_arg(str1, char *);
		if (str2 == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str2);
		}

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str1);
}
