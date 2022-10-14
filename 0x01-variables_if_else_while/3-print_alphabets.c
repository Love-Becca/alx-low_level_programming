#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
	int c;

	int h;

	for (h = 97; h <= 122; ++h)
	{
		putchar(h);
	}
	for (c = 65; c <= 90; ++c)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
