#include "main.h"
/**
 * argstostr - concatenates all the arguments
 *
 * @ac: number of args
 * @av: array containning args
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int len = 0, i, j, l = 0;
	char *s;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]);
	}
	len += ac;
	s = malloc(sizeof(char) * len + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < (int)strlen(av[i]); j++)
		{
			s[l] = av[i][j];
			l++;
		}
		if (l < len)
		{
			s[l] = '\n';
		}
		l++;
	}
	s[len] = '\0';

	return (s);
}
