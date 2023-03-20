#include "main.h"

/**
 * _memset - function that fills memory with constant byte
 * @s: memory area
 * @b: bytes
 * @n: number of byte
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *arr = s;

	while (n-- > 0)
		*arr++ = b;

	return (s);
}
