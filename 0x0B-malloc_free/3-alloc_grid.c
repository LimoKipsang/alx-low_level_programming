#include "main.h"
/**
 *alloc_grid - 2 dimensional array
 *@width: number of columns
 *@height: number of rows
 *Return: pointer to array
 */
int **alloc_grid(int width, int height)
{
	int z;
	int v;
	int **output;

	if (width <= 0 || height <= 0)
		return (NULL);
	output = malloc(sizeof(int *) * height);
	if (output == NULL)
		return (NULL);
	for (v = 0; v < height; v++)
	{
		output[v] = malloc(sizeof(int) * width);

		if (output[v] == NULL)
		{
			free(output);
			for (z = 0; z <= height; z++)
				free(output[z]);
			return (NULL);
		}
		for (z = 0; z < width; z++)
			output[v][z] = 0;
	}
	return (output);
}
