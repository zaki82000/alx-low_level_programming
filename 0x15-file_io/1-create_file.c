#include "main.h"

/**
* create_file -  function that creates a file
* @filename: pointer to file name
* @text_content: pointer to text content
*
* Return: on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)

{
	int fd;
	size_t w;

		if (filename == NULL)
		return (-1);


			fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
			if (fd < 0)
			return (-1);

				if (text_content != NULL)
				{

					w = write(fd, text_content, strlen(text_content));

					if (w != strlen(text_content))
						return (-1);
				}
			close(fd);

	return (1);
}
