#include "main.h"

int length(char *s);
int palindrome(char *s, int l, int a);
int is_palindrome(char *s);

/**
 * length_ - length of a string
 * @s: int
 * Return: length of a string
 */
int length(char *s)
{
	int l = 0;

	if (*(s + l))
	{
		l = l + 1;
		l = l + length(s + l);
	}

	return (l);
}

/**
 * palindrome - palindrome or not
 * @s: char
 * @l: int
 * @a: int
 * Return: palindrome = 1
 */
int palindrome(char *s, int l, int a)
{
	if (s[a] == s[l / 2])
	{
		return (1);
	}

	if (s[a] == s[l - a - 1])
	{
		return (palindrome(s, l, a + 1));
	}

	return (0);
}

/**
 * is_palindrome - palindrome or not
 * @s: char
 * Return: palindrome = 1
 */
int is_palindrome(char *s)
{
	int a = 0;
	int l = length(s);

	if (!(*s))
	{
		return (1);
	}

	return (palindrome(s, l, a));
}
