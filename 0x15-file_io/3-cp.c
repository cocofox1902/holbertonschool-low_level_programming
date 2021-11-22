#include "main.h"

/**
 * close_ - close file
 * @arg: file
 * Return: error
 */

void close_(int arg)
{
	if (close(arg) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", arg);
		exit(100);
	}
	else
		close(arg);
}

/**
 * main - copy file
 * @argc: int
 * @argv: str
 * Return: file coppied
 */

int main(int argc, char *argv[])
{
	int copy_that, coppied, read_, write_;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	copy_that = open(argv[1], O_RDONLY);
	read_ = read(copy_that, buf, 1024);
	coppied = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (copy_that == -1 || read_ == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		write_ = write(coppied, buf, read_);
		if (coppied == -1 || write_ == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		read_ = read(copy_that, buf, 1024);
		coppied = open(argv[2], O_WRONLY | O_APPEND);
	} while (read_ > 0);
	free(buf);
	close_(copy_that);
	close_(coppied);
	return (0);
}
