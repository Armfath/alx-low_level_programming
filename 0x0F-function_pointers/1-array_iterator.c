#include <stdio.h>
/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array
 * @array: the array
 * @size: size of the array
 * @action: the func
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action && (size > 0))
	{
		unsigned long int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
