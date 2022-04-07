#include "main.h"
/**
* _strlen - Write a function that returns the length of a string.
*@s:is a pointer that contain one char
* Return: len of a string
*/
int _strlen(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen(s + 1));
}
/**
* read_textfile - reads a text file and prints
* @filename: text of input
* @letters: # of letters of input
* Return: # of letters of output
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t letters_write;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	letters_write = write(file_descriptor, text_content, _strlen(text_content));
	if (letters_write == -1)
		return (-1);

	close(file_descriptor);
	return (1);
}
