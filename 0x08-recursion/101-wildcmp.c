#include "main.h"

int length(char *s);
int wildcmp(char *s1, char *s2);
int _wildcmp_preposition(int a, int b, char *s1, char *s2);
int _char(int f, int g, char *s1, char *s2);

/**
 * length - length
 * @s: int
 * Return: length
 */

int length(char *s)
{
	if (!*s)
		return (0);

	return (1 + length(s + 1));
}

/**
 * wildcmp - compares
 * @s1: int
 * @s2: int
 * Return: 0 or 1
 */

int wildcmp(char *s1, char *s2)
{
	int d, e;

	d = length(s1) - 1;
	e = length(s2) - 1;
	return (_wildcmp_preposition(d, e, s1, s2));
}

/**
 * _char - char search
 *
 * @f: int
 * @g: int
 * @s1: str
 * @s2: str
 *
 * Return: 1 or -1 or i
 */
int _char(int f, int g, char *s1, char *s2)
{
	if (f < 0)
		return (-1);

	if (*(s2 + g) == '*')
		return (f);

	else if (*(s1 + f) != *(s2 + g))
		return (_char(f - 1, g, s1, s2));

	else
		return (f);
}

/**
 * _wildcmp_preposition - Compare
 * @a: int
 * @j: int
 * @s1: str
 * @s2: str
 * Return: 0 or 1
 */
int _wildcmp_preposition(int a, int b, char *s1, char *s2)
{
	if (a < 0 || b < 0)
		return (1);

	else if ((*(s2 + b) == '*') && b == 0)
		return (1);

	else if (*(s2 + b) == '*')
	{
		a = _char(a, b - 1, s1, s2);

		if (!(a < 0))
			return (_wildcmp_preposition(a, b - 1, s1, s2));

		else
			return (0);
	}
	else if (*(s1 + a) == *(s2 + b))
		return (_wildcmp_preposition(a - 1, b - 1, s1, s2));

	else
		return (0);
}
