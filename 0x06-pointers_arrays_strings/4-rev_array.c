#include "main.h"

/**
 * reverse_array - function to reverse array
 * @a: takes array
 * @n: takes parameter
 * Return : nothing
 */
void reverse_array(int *a, int n)
{
	int save;
	int i;

	for (i = 0; i < n; i++)
	{
		n--;
		save = a[i];
		a[i] = a[n];
		a[n] = save;
	}
}
