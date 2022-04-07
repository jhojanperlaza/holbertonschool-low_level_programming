#include "main.h"
/**
* _strlen - Write a function that returns the length of a string.
*@s:is a pointer that contain one char
* Return: the answer
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
* create_file - function that creates a file
* @filename: text of input
* @text_content: string to write to the file
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t letters_write;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	if (file_descriptor == -1)
		return (-1);

	letters_write = write(file_descriptor, text_content, _strlen(text_content));
	if (letters_write == -1)
		return (-1);

	close(file_descriptor);
	return (1);
}
