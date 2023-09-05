#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - two dimensional
 * @width: one direction
 * @height: another direction
 * Return: null if the elemment zero
 */
int **alloc_grid(int width, int height)
{
	int **rep;
	int a, b;

	if (width <= || height <= 0)
	{
		return (NULL);
	}
	rep = malloc(height * sizeof(int *));
	if (rep == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < height; a++)
	{
		rep[a] = malloc(width * sizeof(int));
		if (rep[a] == NULL)
		{
			for (b = 0; b < a; b++)
			{
				free(rep[b]);
			}
			free(rep);
			return (NULL);
		}
		for (b = 0; b < width; b++)
		{
			rep[a][b] = 0;
		}
	}
	return (rep);
}
