#include "main.h"

/**
 * get_bit
 * @n: unsigned long int
 * @index: unsigned int
 * Return: bits
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bitStatus;

	bitStatus = (n >> index) & 1;
	return (bitStatus);
}
