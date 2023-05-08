#include "main.h"

/**
* read_textfile - function that reads a text and prints it to POSIX stdout
* @filename: pointer to name of the file
* @letters: the no of letters the function can read and print
* Return: number of letters read
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t letters_read, letters_written;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	letters_read = read(fd, buffer, letters);
	if (letters_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	letters_written = write(STDOUT_FILENO, buffer, letters_read);
	if (letters_written == -1 || letters_written != letters_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (letters_written);
}
