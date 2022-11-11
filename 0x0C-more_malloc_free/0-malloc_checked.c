#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocate a memory
 * @b: parameter
 * Return: ptr
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
