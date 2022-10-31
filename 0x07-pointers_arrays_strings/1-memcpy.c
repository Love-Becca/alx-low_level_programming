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
	char *arr = dest;

	while (n-- > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (dest);
}
