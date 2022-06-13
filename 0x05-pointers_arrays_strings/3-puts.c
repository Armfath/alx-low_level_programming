#include "main.h"

/**
 * _puts - prints a string
 *
 * @s: the string
 *
 * Return: void
 */

int _puts(char *s)
{
	int i, j;

	j = 0;
	for (i = 0 ; s[i] == '\0' ; i++)
		j++;
	return (j);
}
