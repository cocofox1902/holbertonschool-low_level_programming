#include "main.h"

/**
 *rot13 - Main
 *@s: string
 *Return: return
 */

char *rot13(char *s)
{
	int a, b;
	char norm[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (s[a] == norm[b])
			{
				s[a] = rot13[b];
				break;
			}
		}
		b = 0;
	}
	return (s);
}