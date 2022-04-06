#include "main.h"
/**
* read_textfile - reads a text file and prints
* @filename: text of input
* @letters: # of letters of input
* Return: # of letters of output
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t number_letters_read;
	ssize_t number_letters_write;
	char *buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	number_letters_read = read(file_descriptor, buf, letters);
	if (number_letters_read == -1)
		return (0);

	number_letters_write = write(STDOUT_FILENO, buf, number_letters_read);
	if (number_letters_write == -1)
		return (0);

	close(file_descriptor);
	free(buf);
	return (number_letters_write);
}
