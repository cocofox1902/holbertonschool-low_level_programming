#include "main.h"

/**
 * _puts_recursion - Write a function that prints string followed by new line.
 * @s: char
 * Return: None
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
