#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - give adress of copied string
 * @str: the string
 * Return: pointer to a newly allocated space
 */
char *_strdup(char *str)
{
	unsigned long int i;
	char *s;

	s = malloc(sizeof(str));
	for (i = 0; i < sizeof(str); i++)
	{
		s[i] = str[i];
	}
	return (s);
}
