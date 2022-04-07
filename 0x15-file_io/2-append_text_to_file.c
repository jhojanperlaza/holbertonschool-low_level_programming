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
* append_text_to_file - appends text at the end of a file
* @filename: text of input
* @text_content: string to write to the file
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t letters_write;

	if (filename == NULL)
		return (-1);

	if (!text_content)
		return (-1);
	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	if (text_content)
	{
		letters_write = write(file_descriptor, text_content, _strlen(text_content));
		if (letters_write == -1)
			return (-1);
	}
	close(file_descriptor);
	return (1);
}
