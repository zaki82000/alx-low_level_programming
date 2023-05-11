#include "main.h"

/**
* append_text_to_file - function that appends text at the end of a file
* @filename: pointer to file name
* @text_content: pointer to text content
*
* Return:  1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t w;

		if (filename == NULL)
		return (-1);

			fd = open(filename, O_WRONLY | O_APPEND);
			if (fd < 0)
			{
				return (-1);
			}

				if (text_content != NULL)
				{
					w = write(fd, text_content, strlen(text_content));

					if (w != strlen(text_content))
						return (-1);

				}
				else
					return (1);

		close(fd);

	return (1);
}
