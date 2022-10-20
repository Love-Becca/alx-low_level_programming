#include "main.h"

/**
 * more_numbers - print numbers followed by a new line
 * Return: always 0
 */

void more_numbers(void)
{
	int s, j;

	for (j = 0; j < 10; j++)
	{
		for (s = 0; s < 15; s++)
		{
			if (s > 9)
				_putchar((s / 10) + '0');

			_putchar((s % 10) + '0');
		}

		_putchar('\n');
	}
}
