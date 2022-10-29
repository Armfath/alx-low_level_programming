#include "main.h"
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