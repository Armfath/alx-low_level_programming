#include <stdio.h>
/**
 * int_index -  searches for an integer in the array
 * @array: the array
 * @size: array's size
 * @cmp: func for search
 *
 * Return: index for find int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
		return (-1);
	}
	return (-1);
}
