#include "main.h"

/**
 * _strlen - count the length of a string
 *
 * @s: the string
 *
 * Return: the length os s
 */

int _strlen(char *s)
{
	int i, j;

	j = 0;
	while (*(s + i) != '\0')
		j++;
	return (j);
}
