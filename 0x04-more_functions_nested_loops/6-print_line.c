#include "main.h"

/**
 * print_line -function that draws straight line
 * @n: parameter
 * Return: 0
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar('_');
		}
	}
	else
	{
		_putchar('\n');
	}

	_putchar('\n');
}
