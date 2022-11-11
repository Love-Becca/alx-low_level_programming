#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concat strings
 * @s1: string one
 * @s2: string two
 * @n: n byte
 * Return: char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *_string;
	unsigned int i, j, k;

	i = 0;
	j = 0;
	k = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	while (s2[j] != '\0')
		j++;

	if (n >= j)
		n = j;

	_string = malloc(sizeof(char) * ((i + j) + 1));

	if (_string == NULL)
		return (0);

	for (k = 0; k < i; k++)
	{
		_string[k] = s1[k];
	}

	for (; k < (i + n); k++)
		_string[k] = s2[k - i];
	_string[k] = '\0';

	return (_string);
}
