#include <stdio.h>
#include <stdlib.h>

/**
 * main - print opcodes of own main function
 * @argc: int
 * @argv: str
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int j, i;
	int (*a)(int, char **) = main;
	unsigned char opc;

	if (argc == 2)
	{
		;
	}
	else
	{
		printf("Error\n");
		exit(1);
	}
	j = atoi(argv[1]);
	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < j; i++)
	{
		opc = *(unsigned char *)a;
		printf("%.2x", opc);
		if (i == j - 1)
			continue;
		printf(" ");
		a++;
	}
	printf("\n");
	return (0);
}
