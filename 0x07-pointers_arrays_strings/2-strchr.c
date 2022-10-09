#include <stddef.h>
#include <string.h>
/**
 * _strchr - locates a character in a string.
 * @s: the string
 * @c: the char
 *
 * Return: the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	int len, i;

	len = strlen(s) + 1;
	for (i = 0; i < len; i++)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
