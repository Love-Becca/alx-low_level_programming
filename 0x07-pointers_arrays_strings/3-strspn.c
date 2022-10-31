#include "main.h"

/**
 * _strspn - function that gets lenght of a  prefix substring
 * @s: string
 * @accept: prefix
 * Return: data_size
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int data_size;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				data_size++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (data_size);

		}
		s++;
	}
	return (data_size);
}
