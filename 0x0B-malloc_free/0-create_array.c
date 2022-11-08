#include "main.h"
#include <stdlib.h>
/**
 * create_array - create arrays of char
 * @size: parameter
 * @c: array
 * Return: string
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *s;

	s = malloc(size * sizeof(char));

	if (s == 0 || s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
