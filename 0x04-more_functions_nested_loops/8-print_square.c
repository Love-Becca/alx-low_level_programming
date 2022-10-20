#include "main.h"

/**
 * print_square - function that pritn a square followed by a new line
 * @size: parameter
 * Return: 0
 */

void print_square(int size)
{
	int c, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < size; c++)
		{
			for (b = 0; b < size; b++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
