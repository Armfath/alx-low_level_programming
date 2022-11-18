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
	unsigned int len1 = 0, len2 = 0, len = 0, i, j = 0;
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
	printf("len1 = %u\n", len1);
	len2 = strlen(s2);
	printf("len2 = %u\n", len2);
	if (len2 < n)
	{
		n = len2;
	}
	printf("n = %u\n", n);
	len = len1 + n;
	printf("len = %u\n", len);
	s = malloc(sizeof(char) * (len));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}
	for (; i < len; i++)
	{
		s[i] = s2[j];
		j++;
	}

	return (s);
}
