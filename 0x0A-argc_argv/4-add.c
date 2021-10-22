#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that adds positive numbers.
 * @argc: int
 * @argv: str
 * Return: return
 */

int main(int argc, char *argv[])
{
	int x, y, equal;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; y < argv[x][y]; y++)
		{
			if (argv[x][y] < '0' || argv[x][y] > '9')
			{
				printf("Error\n");
				return (1);
			}
			equal += atoi(argv[x]);
		}
	}
	printf("%d\n", equal);
	return (0);
}
