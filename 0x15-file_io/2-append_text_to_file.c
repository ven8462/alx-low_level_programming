#include "main.h"

/**
* append_text_to_file - appends text to the end of a file.
* @filename: pointer to name of the file
* @text_content: the text to be appended
* Return: 1 on sucess, -1 otherwise
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		len++;
	}

	/*if (access(filename, F_OK) == 0)*/
		o = open(filename, O_WRONLY | O_APPEND | O_CREAT, S_IRUSR | S_IWUSR);

		w = write(o, text_content, len);

		if (o == -1 || w == -1)
		{
			return (-1);
		}
	close(o);

	return (1);
}
