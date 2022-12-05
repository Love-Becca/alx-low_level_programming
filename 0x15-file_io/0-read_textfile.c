#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read file conent
 * @filename: name or path of the file
 * @letters: file content
 * Return: 0 or 1
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t opn, reed, w;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);

	opn = open(filename, o_RDONLY);
	reed = read(opn, buf, letters);
	w = write(STDOUT_FILENO, buf, reed);

	if (opn == -1 || reed == -1 || w == -1 || w != reed)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(opn);

	return (w);
}
