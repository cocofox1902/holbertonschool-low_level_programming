#include "main.h"

/**
 * append_text_to_file - read without overwrite and print file
 * @filename: constant
 * @text_content: letter
 * Return: file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t a;
	ssize_t c;
	int lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		while (text_content[lenght])
			lenght++;

	a = open(filename, O_WRONLY | O_APPEND);
	c = write(a, text_content, lenght);

	if (a == -1 || c == -1)
	{
		return (-1);
	}

	close(a);
	return (1);
}