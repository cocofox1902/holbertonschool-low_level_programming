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
	int cpt = 0;

	while (i < 58)
	{
		while (c < 58)
		{
			if (c != i)
			{
				putchar(i);
				putchar(c);
				if (i < 56)
				{
					putchar(',');
					putchar(' ');
				}
				c++;
			}
			else
			{
				c++;
			}
		}
		cpt = cpt + 1;
		c = 48 + cpt;
		i++;
	}
	putchar('\n');
	return (0);
}
