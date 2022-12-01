#include "main.h"

/**
 * flip_bits - bits to get another number
 * @n: parameter
 * @m: parameter
 * Return: int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits_xor = n ^ m, save = 0;

	while (bits_xor > 0)
	{
		save += (bits_xor & 1);
		bits_xor >>= 1;
	}
	return (save);
}
