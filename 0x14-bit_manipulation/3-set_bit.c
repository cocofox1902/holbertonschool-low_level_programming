#include "main.h"

/**
 * set_bit - set bits
 * @n: unsigned long int
 * @index: unsigned int
 * Return: bits set
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}
	else
	{
		*n |= (1 << index);
		return (1);
	}
}
