#include "main.h"

/**
 * binary_to_uint - prints decimal
 * @b: `binary
 * Return: int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int d = 0;
	int i;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		d = 2 * d + (b[i] - '0');
	}
	return (d);
}
