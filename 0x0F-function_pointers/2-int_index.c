#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - search for integer
 * @array: parameter
 * @size: of arary
 * @cmp: pointer to function
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
}
