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
	for (i = 1; i < ac; i++)
	{
		len += strlen(av[i]);
	}
	len += ac;
	s = malloc(sizeof(char) * len);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 1; i < ac; i++)
	{
		for (j = 0; j < (int)strlen(av[i]); j++)
		{
			printf("l = %d\n", l);
			s[l] = av[i][j];
			l++;
		}
		if (l < len)
		{
			s[l] = '\n';
		}
		l++;
	}

	return (s);
}
