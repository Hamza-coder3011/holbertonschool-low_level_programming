#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
* create_file - creates a file with the specified content.
* @filename: the name of the file to create.
* @text_content: the text to write to the file.
*
* Return: 1 on success, -1 on failure.
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t n_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		n_written = write(fd, text_content, strlen(text_content));
		if (n_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
