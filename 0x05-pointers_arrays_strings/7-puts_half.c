#include "main.h"

/**
 * puts_half - print half of a string
 * @str: char
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int max, divmax;

	for (max = 0; str[max] != '\0'; max++)
	{
		continue;
	}
	divmax = max / 2;
	while (str[divmax] != '\0')
	{
		_putchar(str[divmax]);
		divmax++;
	}
	_putchar('\n');
}
