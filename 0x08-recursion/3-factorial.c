#include "main.h"

/**
 * factorial - Write a function that returns the length of a string.
 * @n: int
 * Return: number factoriel
 */

int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n - 1));
	else if (n < 0)
		return (-1);
	else
		return (1);
}
