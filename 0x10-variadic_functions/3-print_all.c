#include "variadic_functions.h"

void _char(va_list arg);
void _string(va_list arg);
void _int(va_list arg);
void _float(va_list arg);
void print_all(const char *const format, ...);

/**
 * _char - print str
 * @arg: list
 * Return: NULL
 */
void _char(va_list arg)
{
	char lt;

	lt = va_arg(arg, int);
	printf("%c", lt);
}

/**
 * _string - Prints a string.
 * @arg: list
 * Return: NULL
 */
void _string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", str);
}

/**
 * _int - print int
 * @arg: list
 * Return: NULL
 */
void _int(va_list arg)
{
	int nb;

	nb = va_arg(arg, int);
	printf("%d", nb);
}

/**
 * _float - Prints a float.
 * @arg: list
 * Return: NULL
 */
void _float(va_list arg)
{
	float nb;

	nb = va_arg(arg, double);
	printf("%f", nb);
}

/**
 * print_all - print all
 * @format: const char
 * @...: var
 * Return: NULL
 */
void print_all(const char *const format, ...)
{
	va_list arg;
	int i = 0, j = 0;
	char *k = "";
	printer_t f[] = {
		{"c", _char},
		{"i", _int},
		{"f", _float},
		{"s", _string}};

	va_start(arg, format);
	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(f[j].symbol)))
			j++;
		if (j < 4)
		{
			printf("%s", k);
			f[j].print(arg);
			k = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(arg);
}
