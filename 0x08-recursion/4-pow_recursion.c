#include "main.h"

/**
 * _pow_recursion - Write function that return the value of x to the power of y
 * @x: int
 * @y: int
 * Return: value of x and raise power of y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
