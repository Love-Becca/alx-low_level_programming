#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * read_textfile - read file conent
 * @filename: name or path of the file
 * @letters: file content
 * Return: 0 or 1
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t reed, w;
	int opn;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	opn = open(filename, o_RDONLY);
	reed = read(opn, buffer, letters);
	w = write(STDOUT_FILENO, buf, reed);

	if (opn == -1 || reed == -1 || w == -1 || w != reed)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(opn);

	return (w);
}
