#include <stdio.h>

/**
 * main - Write a program that prints its name, followed by a new line.
 * @argc: int
 * @argv: str
 * Return: return 0
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
