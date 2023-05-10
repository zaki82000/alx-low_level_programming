#include "main.h"

/**
* read_textfile - function that reads a text file and prints it
* @filename: pointer to filename
* @letters: number of letters it should read and print
*
* Return: return 0 in error and return write in end
*/



ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	ssize_t r, w;
	char *c;

	if (filename == NULL)
	return (0);

		fd = open(filename, O_RDONLY);

		if (fd < 0)
		return (0);

		c = (char *) malloc(letters * sizeof(char));

		if (c == NULL)
		return (0);

			r = read(fd, c, letters);
			w = write(STDOUT_FILENO, c, r);

			if (w != r)
			return (0);

	free(c);
	close(fd);

	return (w);

}
