#include <stdio.h>

/**
 * main - Write a program that prints the number of arguments passed into it.
 * @argc: int
 * @argv: str
 * Return: return 0
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
