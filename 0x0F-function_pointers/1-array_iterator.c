#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - execute function
 * @array: parameter
 * @size: parameter
 * @action: parameter
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
