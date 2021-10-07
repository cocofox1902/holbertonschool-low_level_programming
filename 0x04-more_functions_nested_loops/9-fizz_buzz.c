#include <stdio.h>

/**
 * print_square - print square
 * @size: int
 * Return: multipe
 */

int main(void)
{
	int a = 0;
	for (a = 0; a <= 100; a++)
	{
		if (a % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", a);
		}
	}
	printf("\n");
}
