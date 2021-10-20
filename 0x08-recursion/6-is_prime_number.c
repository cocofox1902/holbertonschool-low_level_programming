#include "main.h"

int prime_(int i, int j);
int is_prime_number(int n);

/**
 * is_prime_number - prime number
 * @n: int
 * Return: prime is 1
 */
int is_prime_number(int n)
{
	int j = 2;

	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (prime_(n, j));
}

/**
 * prime_ - prime number or not
 * @i: int
 * @j: int
 * Return: squarre
 */
int prime_(int i, int j)
{
	if (i % j == 0)
		return (0);
	if (j == i / 2)
		return (1);
	return (prime_(i, j + 1));
}
