#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: given string
 * @accept: use for search
 *
 * Return: length of correspond sub-string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int accept_len, s_len, exist = 0, i, j;

	s_len = strlen(s);
	accept_len = strlen(accept);
	for (i = 0; i < s_len; i++)
	{
		for (j = 0; j < accept_len; j++)
		{
			if (s[i] == accept[j])
			{
				exist = 1;
				break;
			}
			else
				exist = 0;
		}
		if (exist == 1)
			len++;
		else
			return (len);
	}
	return (len);
}
