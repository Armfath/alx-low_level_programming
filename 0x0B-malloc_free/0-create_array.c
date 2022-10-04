#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: the initial char
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0 || malloc(sizeof(char) * size) == NULL)
	{
		return (NULL);
	}
	else
	{
		char *str;

		str = malloc(sizeof(char) * size);
		while (size + 1)
		{
			str[size] = c;
			size--;
		}
		return (str);
	}
}
