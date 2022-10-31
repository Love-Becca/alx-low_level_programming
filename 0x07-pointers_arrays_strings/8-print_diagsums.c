#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of diagonal
 * @a: parameter
 * @size: parameter
 */

void print_diagsums(int *a, int size)
{
	int i, sum_one = 0, sum_two = 0;

	for (i = 0; i < size; i++)
	{
		sum_one += a[i];
		a += size;
	}
	a -= size;
	for (i = 0; i < size; i++)
	{
		sum_two += a[i];
		a -= size;
	}
	printf("%d, %d\n", sum_one, sum_two);
}
