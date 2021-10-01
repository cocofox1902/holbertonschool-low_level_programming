#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Main
 *
 * Return: 0
 */


int main(void)
{
	char n = 48;
	char x = 97;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	while (x <= 102)
	{
		putchar(x);
		x++;
	}
	putchar ('\n');
	return (0);
}
