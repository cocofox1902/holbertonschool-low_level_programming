#include "main.h"

/**
 *leet - Main
 *@s: string
 *Return: returns
 */

char *leet(char *s)
{
	int a, b;
	char cmin[] = "aeotl";
	char cmaj[] = "AEOTL";
	char cnb[] = "43071";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; cmin[b] && cmaj[b] != '\0'; b++)
		{
			if (s[a] == cmin[b] || s[a] == cmaj[b])
			{
				s[a] = cnb[b];
			}
		}
	}
	return (s);
}
