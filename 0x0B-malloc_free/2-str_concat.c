#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - give adress of concat strings
 * @s1: 1st string
 * @s2: 2nd string
 * Return: pointer to a newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	char *strDup;
	int len1, len2, len, i, j;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	len1 = 0;
	while (s1 != NULL && s1[len1] != 0)
		len1++;
	len2 = 0;
	while (s2 != NULL && s2[len2] != 0)
		len2++;
	len = len1 + len2 + 1;
	strDup = malloc(sizeof(*s1) * (len));
	if (strDup == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
	{
		strDup[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		strDup[i] = s2[j];
		i++;
	}
	return (strDup);
}
