#include "main.h"

/**
 * _strncpy - function that copies
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];

		if (i < n)
			dest[i] = '\0';
		i++;
	}
	return (dest);
}
