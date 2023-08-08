#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width
 * @height: height
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **dimm;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	dimm = malloc(sizeof(int *) * height);

	if (dimm == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		dimm[x] = malloc(sizeof(int) * width);

		if (dimm[x] == NULL)
		{
			for (; x >= 0; x--)
				free(dimm[x]);

			free(dimm);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			dimm[x][y] = 0;
	}

	return (dimm);
}
