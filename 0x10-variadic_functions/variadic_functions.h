#ifndef MAIN_H
#define MAIN_H

/**
 * struct printer - define a printer
 * @symbol: str
 * @print: void
 */

#include <stdio.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
typedef struct printer
{
	char *symbol;
	void (*print)(va_list arg);

} printer_t;
void print_all(const char *const format, ...);

#endif /* MAIN_H */
