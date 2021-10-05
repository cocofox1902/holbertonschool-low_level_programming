#include "main.h"

/**
 * print_alphabet - Print alphabet
 */

void print_alphabet(void)
{
	int P = 0;
	char str[] = "abcdefghijklmnopqrstuvwxyz";

	while (P != 26)
	{
		_putchar(str[P]);
		P++;
	}
	_putchar('\n');
}
