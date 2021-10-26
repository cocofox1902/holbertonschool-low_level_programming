#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int **alloc_grid(int width, int height)
 * @width: int
 * @height: int
 * Return: return
 */

int **alloc_grid(int width, int height)
{
	int **v;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	v = (int **)malloc(height * sizeof(int *));

	if (v == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		v[i] = (int *)malloc(width * sizeof(int));

		if (v[i] == NULL)
		{
			for (i = 0; i >= 0; i--)
			{
				free(v[i]);
			}
			free(v);
			return (NULL);
		}
	}
	return (v);
}