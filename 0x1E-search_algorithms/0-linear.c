#include "search_algos.h"

/**
 * linear_search -  searches for a value in an array of integers
 *
 * @array: array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: first idx where value is located or -1 if value is not found or null
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	char msg[50];

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		sprintf(msg, "Value checked array[%ld] = [%d]\n", i, array[i]);
        write(STDOUT_FILENO, msg, strlen(msg));
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
