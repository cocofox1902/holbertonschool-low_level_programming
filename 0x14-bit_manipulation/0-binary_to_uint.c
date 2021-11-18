#include "main.h"

/**
 * binary_to_uint - convert into int
 * @b: coonstant
 * Return: int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bin = 0, times = 1;
	int lenght = 0;

	if (b == NULL)
		return (0);

	for (lenght = 0; b[lenght]; lenght++)
		;

	for (lenght -= 1; lenght >= 0; lenght--)
	{
		if (b[lenght] != '0' && b[lenght] != '1')
			return (0);
		bin += (b[lenght] - '0') * times;
		times *= 2;
	}
	return (bin);
}
