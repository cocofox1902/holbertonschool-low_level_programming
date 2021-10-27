#include "main.h"
#include <stdlib.h>

int lenght(char *s);
int nb_count(char *str);

/**
 * strtow - splits a string
 * @str: str
 * Return: 0
 */
char **strtow(char *str)
{
	int i, w, l, k, j = 0;
	char **h;

	if (str == NULL || *str == '\0')
		return (NULL);

	w = nb_count(str);
	if (w == 0)
		return (NULL);

	h = (char **)malloc(sizeof(char *) * (w + 1));
	if (h == NULL)
		return (NULL);

	for (i = 0; i < w; i++)
	{
		while (*(str + j) == ' ')
			j++;

		l = lenght(str + j);

		h[i] = (char *)malloc(sizeof(char) * l + 1);

		if (h[i] == NULL)
		{
			for (; i >= 0; i--)
				free(h[i]);
			free(h);
			return (NULL);
		}

		for (k = 0; k < l; k++)
			h[i][k] = str[j++];

		h[i][k] = '\0';
	}
	h[i] = NULL;
	return (h);
}

/**
 * lenght - lenght
 * @s: str
 * Return: 0
 */
int lenght(char *s)
{
	int i = 0;

	while (*(s + i) != ' ' && *(s + i))
		i++;
	return (i);
}

/**
 * nb_count - number of w
 * @str: str
 * Return: 0
 */
int nb_count(char *str)
{
	int i = 0, nd_w = 0, len = 0;

	for (i = 0; *(str + i); i++)
		len++;

	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			nd_w++;
			i += lenght(str + i);
		}
	}
	return (nd_w);
}
