#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function to concat two string
 * @s1: parameter
 * @s2: parameter
 * Return: string
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *string;

	i = 0; j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	string = malloc(sizeof(char) * (i + j + 1));

	if (string == NULL)
		return (NULL);
	i = 0; j = 0;

	while (s1[i] != '\0')
	{
		string[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		string[i] = s2[j];
		i++; j++;
	}
	string[i] = '\0';
	return (string);
}
