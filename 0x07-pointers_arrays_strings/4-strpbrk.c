#include "main.h"
/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: given str
 * @accept: for search
 * Return: pointer to the byte in s or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i, accept_len = strlen(accept);

	while (*s)
	{
		for (i = 0; i < accept_len; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
