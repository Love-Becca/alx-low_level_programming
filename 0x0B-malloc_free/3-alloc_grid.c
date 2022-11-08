#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - pointer to dimensional array
 * @width: parameter
 * @height: parameter
 * Return: int
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **_arry;

	if (width <= 0 || height <= 0)
		return (NULL);

	_arry = malloc(sizeof(int *) * height);

	if (_arry == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		_arry[i] = malloc(sizeof(int) * width);
		if (_arry[i] == NULL)
		{
			for (; i >= 0; i--)
				free(_arry[i]);
			free(_arry);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			_arry[i][j] = 0;
	}
	return (_arry);
}
