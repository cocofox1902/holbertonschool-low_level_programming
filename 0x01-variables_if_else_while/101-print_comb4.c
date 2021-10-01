#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Main
 *
 * Return: 0
 */

int main(void)
{
	int i = 48;
	int c = 48;
    int u = 48;
	int cpt = 0;

	while (u < 58)
	{
		while (i < 58)
		{
			while (c < 58)
			{
				if (u != c)
				{
					if (c != i)
					{
						putchar(i);
						putchar(c);
						putchar(u);
						if (u < 56)
						{
							putchar(',');
							putchar(' ');
						}
					}
					c++;
				}
				else
				{
					u++;
				}
			}
		}
		cpt = cpt + 1;
		c = 48 + cpt;
		u++;
	}
	putchar('\n');
	return (0);
}
