#include "main.h"

/**
 * puts2 - print a string
 * @str: char
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
