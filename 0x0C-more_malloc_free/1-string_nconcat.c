#include "main.h"
/**
 * string_nconcat - concat two string
 *
 * @s1: str1
 * @s2: str2
 * @n: num of bites
 *
 * Return: pointer to the newly string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, len = 0, i;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	if (len2 < n)
	{
		n = len2;
	}
	len = len1 + n;
	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		if (i < len1)
		{
			s[i] = *s1;
			s1++;

		}
		else
		{
			s[i] = *s2;
			s2++;
		}
		
	}
	s[i] = '\0';

	return (s);
}
