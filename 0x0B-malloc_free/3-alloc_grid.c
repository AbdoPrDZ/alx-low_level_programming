#include "main.h"

/**
 * alloc_grid - Allocate the grid.
 * @width: The width of grid.
 * @height: The height of grid.
 * Return: Allocated grid.
 */
int **alloc_grid(int width, int height)
{
	int **a;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(height * sizeof(int *));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));

		if (a[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(a[j]);

			free(a);

			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			a[i][j] = 0;

	return (a);
}
