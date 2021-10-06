#include "main.h"

/**
* positive_or_negative - positive or negative
*
* @i: int
*
* Return: 0
*/

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative", i);
	}
	if (i == 0)
	{
		printf("%d is zero", i);
	}
	if (i > 0)
	{
		printf("%d is positive", i);
	}
}
