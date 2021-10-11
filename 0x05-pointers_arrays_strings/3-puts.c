#include "main.h"

/**
 * _puts - print a string
 * @str: char
 * Return: Always 0.
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str = *str + 1);
	}
	_putchar('\n');
}
