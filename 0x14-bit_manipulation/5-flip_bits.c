#include "main.h"

/**
 * flip_bits - flip bits
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: bits flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	long int count = 0;

	while (n != 0 || m != 0)
	{
		if ((n & 1) != (m & 1))
			count++;
		m >>= 1;
		n >>= 1;
	}
	return (count);
}
