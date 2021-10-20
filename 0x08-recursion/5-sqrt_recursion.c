#include "main.h"

int sqrt_(int i, int j);
int _sqrt_recursion(int n);

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n: int
 * Return: squarre
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (sqrt_(n, 1));
}

/**
 * sqrt_ - get id square
 * @i: int
 * @j: int
 * Return: squarre
 */
int sqrt_(int i, int j)
{
	if ((j * j) == i)
		return (j);
	if ((j * j) > i)
		return (-1);
	return (sqrt_(i, j + 1));
}
