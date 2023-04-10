#include "main.h"

/**
* read_textfile - function that reads a text file and prints it to POSIX stdout
* @filename: pointer to name of the file
* letters: the no of letters the function can read and print
*
* Return: actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r, w, o;
	char *buffer;

	if (filename == NULL)
		return (0);

	/*allocate memory for the buffer*/
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);/*open file for reading*/
	r = read(o, buffer, letters);/* read the file upto "letters" char*/
	w = write(STDOUT_FILENO, buffer, r);

	/*check for errors during operations*/
	if (o == -1 || r == -1 || w == -1 || w != r)
	{
	/*clean buffer and return 0 if there was no error*/
		free(buffer);
		return (0);
	}
	/*clean up buffer and close the file if operations were a success*/
	free(buffer);
	close(o);

	/*return no of chars that were read and printed*/
	return (w);
}
