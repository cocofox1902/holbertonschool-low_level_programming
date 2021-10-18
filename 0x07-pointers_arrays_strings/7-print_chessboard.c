#include "main.h"

/**
 * _strstr - Write a function that locates a substring.
 * @haystack: char
 * @needle: char
 * Return: a pointer to the beginning of the located substring
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
