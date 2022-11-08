#include "main.h"
#include <stdlib.h>

/**
 * _strdup - return pointer to memory
 * @str: parameter
 * Return: string
 */

char *_strdup(char *str)
{
	int i, k;
	char *j;

	if (str == NULL)
		return (NULL);

	while (str != '\0')
	{
		i++;
	}

	j = malloc((i * sizeof(char)) + 1);

	if (j == NULL)
		return(NULL);
	for (k = 0; str[k]; k++)
		j[k] = str[k];
	return (j);
}
