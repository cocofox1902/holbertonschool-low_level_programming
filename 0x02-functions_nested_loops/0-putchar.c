#include "main.h"

/**
 * main - Main
 *
 * Return: 0
 */

int main(void)
{
	int P = 0;
	char str[] = "_putchar";

	while (P != 8)
	{
		_putchar(str[P]);
		P++;
	}
	_putchar('\n');
	return (0);
}
