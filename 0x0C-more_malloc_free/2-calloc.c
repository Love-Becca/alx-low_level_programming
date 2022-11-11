#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array
 * @nmemb: size of block
 * @size: bytes to be allocated
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *b;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = malloc(nmemb * size);

	if (b == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		b[i] = 0;
	return (b);
}
