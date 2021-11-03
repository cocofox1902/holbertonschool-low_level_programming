#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - add a and b
 * @a: int
 * @b: int
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub a and b
 * @a: int
 * @b: int
 * Return: a - b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul a and b
 * @a: int
 * @b: int
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div a and b
 * @a: int
 * @b: int
 * Return: a / b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - mod a and b
 * @a: int
 * @b: int
 * Return: a % b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
