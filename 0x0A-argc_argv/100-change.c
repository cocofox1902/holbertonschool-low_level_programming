#include <stdio.h>
#include <stdlib.h>

/**
 * main - program prints minimum number of coins to change for amount of money
 * @argc: int
 * @argv: str
 * Return: return
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);

	while (x > 0)
	{
		y++;
		if ((x - 25) >= 0)
		{
			x -= 25;
		}
		else if ((x - 10) >= 0)
		{
			x -= 10;
		}
		else if ((x - 5) >= 0)
		{
			x -= 5;
		}
		else if ((x - 2) >= 0)
		{
			x -= 2;
		}
		else if ((x - 1) >= 0)
		{
			x -= 1;
		}
	}

	printf("%d\n", y);
	return (0);
}
