#include "main.h"

/**
 * _strchr - function that locates a character in a string
 * @s: parameter
 * @c: parameter
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int i = 0, j;

	while (s[i])
		i++;

	for (j = 0; j <= i; j++)
	{
		if (c == s[j])
		{
			s += j;
			return (s);
		}
	}
	return ('\0');
}
