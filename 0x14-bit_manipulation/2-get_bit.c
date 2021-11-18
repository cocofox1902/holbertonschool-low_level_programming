#include "main.h"

/**
 * get_bit - get bites
 * @n: unsigned long int
 * @index: unsigned int
 * Return: bits
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitStatus;

	if (n == '\0')
		return (0);

	bitStatus = (n >> index) & 1;
	return (bitStatus);
}
