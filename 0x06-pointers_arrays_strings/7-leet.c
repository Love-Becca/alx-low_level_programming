#include "main.h"

/**
 * leet - encode a string
 * @n: parameter
 * Return: n
 */

char *leet(char *n)
{
	char s[] = "aAeEoOtTlL";
	char d[] = "4433007711";
	int i;
	int j;

	for (i = 0; n[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] == s[j])
				n[i] = d[j];
		}
	}
	return (n);
}
