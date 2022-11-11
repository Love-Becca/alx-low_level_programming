#include "main.h"
#include <stdlib.h>

/**
 * array_range - print range of array
 * @min: min value
 * @max: max value
 * Return: int
 */

int *array_range(int min, int max)
{
	int *save, i;
	int b = min;

	if (min > max)
		return (0);
	save = malloc((max - min + 1) * sizeof(int));

	if (!save)
		return (0);
	i = 0;

	while (i <= max - min)
		save[i++] = b++;
	return (save);
}
