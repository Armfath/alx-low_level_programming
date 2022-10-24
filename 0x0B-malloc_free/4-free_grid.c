#include "main.h"
/**
 * free_grid - free a 2d array of int
 * @grid: the arr
 * @height: height of the arr
 * Return: pointer to 2d arr
 */
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
