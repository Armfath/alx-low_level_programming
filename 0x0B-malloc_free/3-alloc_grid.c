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
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(width * sizeof(int *));
	for (i = 0; i < width; i++)
		arr[i] = malloc(height * sizeof(int));
	if (arr == NULL || arr[0] == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			arr[i][j] = 0;
	return (arr);
}
