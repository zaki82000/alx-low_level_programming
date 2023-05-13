#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFSIZE 1024

void _close(int fd);

/**
* main - program copies the content of a file to another file
* @argc: argument count
* @argv: argument vector
*
* Return: 1 always
*/

int main(int argc, char *argv[])
{
	int file_from, file_to, r, w;
	char buff[BUFFSIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

		file_from = open(argv[1], O_RDONLY);
		file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | 0664);

			do {
				r = read(file_from, buff, BUFFSIZE);

				if (file_from < 0 || r < 0)
				{
					dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
					exit(98);
				}

				w = write(file_to, buff, r);

				if (file_to < 0 || w < 0)
				{
					dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
					exit(99);
				}
			} while (r);

		_close(file_from);
	return (0);
}

/**
* _close - function closes a file decriptor
* @fd: file decriptor
*/
void _close(int fd)
{
	if (close(fd) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
