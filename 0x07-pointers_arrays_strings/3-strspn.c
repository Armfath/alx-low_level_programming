#include <string.h>
unsigned int _strspn(char *s, char *accept)
{
	long unsigned int i, j;
	unsigned int len = 0;
	
	for (i = 0; i < strlen(accept); i++)
	{
		for (j = 0; j < strlen(s); j++)
		{
			if (accept[i] == s[j])
			{
				len++;
				break;
			}
		}
	}
	return (++len);
}
