#include "main.h"

/**
 * get_endianness - check the endianness
 * Return: 0 or 1
 */

int get_endianness(void)
{
	int var = 1;
	char *end = (char *)&var;

	return (*end + 48);
}
