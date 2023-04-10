#include "main.h"

/**
* create_file - creates a file.
* @text_content: a pointer  to a stringto a string.
* @filename: a pointer to the name of file to create.
*
* Return: 1 if file is created , -1 otherwise.
*/

int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0, mode = 0600;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, mode);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
