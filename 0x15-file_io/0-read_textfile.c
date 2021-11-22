#include "main.h"

/**
 * read_textfile - read and print file
 * @filename: constant
 * @letter: letter
 * Return: file
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t a;
	ssize_t b;
	ssize_t c;

	buf = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);

	if (buf == NULL)
		return (0);

	a = open(filename, O_RDONLY);
	b = read(a, buf, letters);
	c = write(STDOUT_FILENO, buf, b);

	if (a == -1 || b == -1 || c == -1 || c != b)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(a);

	return (c);
}