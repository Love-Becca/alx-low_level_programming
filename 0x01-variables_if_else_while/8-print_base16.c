#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	int c;

	char f;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
	}
	for (f = 'a'; f <= 'f'; f++)
	{
		putchar(f);
	}
	putchar('\n');
	return (0);
}
