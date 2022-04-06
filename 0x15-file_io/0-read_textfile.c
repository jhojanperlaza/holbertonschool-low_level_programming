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
	ssize_t reaad;
	ssize_t wriite;
	char *buf = malloc(sizeof(char) * letters);

	if (buf == NULL)
		return (0);
	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	reaad = read(file_descriptor, buf, letters);
	if (reaad == -1)
		return (0);

	wriite = write(STDOUT_FILENO, buf, reaad);
	if (wriite == -1)
		return (0);

	close(file_descriptor);
	free(buf);
	return (wriite);
}
