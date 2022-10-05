#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - give adress of copied string
 * @str: the string
 * Return: pointer to a newly allocated space
 */
char *_strdup(char *str)
{
	char *strDup;
	int len, i;

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != 0)
		len++;
	strDup = malloc(sizeof(*str) * (len + 1));
	if (strDup == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		strDup[i] = str[i];
	}
	return (strDup);
}
