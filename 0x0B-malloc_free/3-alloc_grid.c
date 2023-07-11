#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * alloc_grid - the function that returns a pointer to a 2 dimensional array of integers
 * @width: input of width
 * @height: input of height
 * Return: pointer to a 2 dimensional array of integers
 */

int **alloc_grid(int width, int height)

{
	int **X;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	X = malloc(sizeof(int *) * height);

	if (X == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		X[a] = malloc(sizeof(int) * width);

		if (X[a] == NULL)
		{
			for (; a >= 0; a--)
				free(X[a]);

			free(X);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			X[a][b] = 0;
	}

	return (X);
}
