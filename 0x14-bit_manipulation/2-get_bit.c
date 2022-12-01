#include "main.h"

/**
 * get_bit - value of bit in index
 * @n: parameter
 * @index: position
 * Return: int
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
