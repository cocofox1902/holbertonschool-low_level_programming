#include "main.h"

/**
 * clear_bit - clear bit
 * @n: unsigned long int
 * @index: unsigned int
 * Return: bit clear
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
	{
		return (-1);
	}
	else
	{
		*n &= ~(1 << index);
		return (1);
	}
}
