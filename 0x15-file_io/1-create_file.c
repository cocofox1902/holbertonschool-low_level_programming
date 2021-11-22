#include "main.h"

/**
 * create_file - create a file and write in it
 * @filename: constant
 * @text_content: str
 * Return: file created
 */

int create_file(const char *filename, char *text_content)
{
	ssize_t a;
	ssize_t c;
	int lenght = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
		while (text_content[lenght])
			lenght++;
	else
		return (-1);

	a = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	c = write(a, text_content, lenght);

	if (a == -1 || c == -1)
	{
		return (-1);
	}

	close(a);
	return (1);
}
