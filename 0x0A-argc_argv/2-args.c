#include <stdio.h>

/**
 * main - Write a program that prints all arguments it receives.
 * @argc: int
 * @argv: str
 * Return: return
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
		printf("%s\n", argv[x]);
	return (0);
}
