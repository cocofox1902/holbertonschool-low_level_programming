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
	int a, b, c, d;

	a = b = c = 48;
	d = 49;
	while (a < 58)
	{
		while (b < 58)
		{
			while (c < 58)
			{
				while (d < 58)
				{
					putchar(a);
					putchar(b);
					putchar(32);
					putchar(c);
					putchar(d);
					if (a == 57 && b == 56 && c == 57 && d == 57)
					{

					}
					else
					{
						putchar(',');
						putchar(' ');
					}
					d++;
				}
				d = 48;
				c++;
			}
			c = a;
			d = b + 2;
			b++;
		}
		b = 48;
		a++;
	}
	putchar('\n');
	return (0);
}
