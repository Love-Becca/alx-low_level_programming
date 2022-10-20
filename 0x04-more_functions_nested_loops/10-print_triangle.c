#include "main.h"

/**
 * print_triangle - function that prints triangle
 * @size: parameter
 * Return: always 0
 */

void print_triangle(int size)
{
	int h, t;

	if (n > 0)
	{
		for (h = 1; h <= n; h++)
		{
			for (t = n - h; t > 0; t--)
			{
				_putchar(' ');
			}
			for (t = 0; t < h; t++)
				_putchar('#');

			if (h == n)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
