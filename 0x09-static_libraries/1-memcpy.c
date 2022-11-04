#include "main.h"

/**
 * _memcpy - functin that copies memory area
 * @dest: parameter
 * @src: parameter
 * @n: size of memory to print
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
