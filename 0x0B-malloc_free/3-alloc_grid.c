#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - point to an 2d array of int
 * @width: width of the arr
 * @height: height of the arr
 * Return: pointer to 2d arr
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int h, w;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(height * sizeof(int *));
	if (!arr)
	{
		free(arr);
		return (NULL);
	}
	for (h = 0; h < height; h++)
	{
		arr[h] = malloc(width * sizeof(int));
		if (!arr[h])
		{
			while (--h >= 0)
				free(arr[h]);
			free(arr);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			arr[h][w] = 0;
			w++;
		}
		h++;
	}
	return (arr);
}
