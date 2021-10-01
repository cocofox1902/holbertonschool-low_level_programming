#include <stdio.h>

/**
 * main - Main
 *
 * Return: 0
 */


int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar (alphabet);
		}
	}
	putchar('\n');
	return (0);
}
