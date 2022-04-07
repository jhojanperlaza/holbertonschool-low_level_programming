#include "main.h"
/**
*check_typing_errors - check for typing errors
*@n:is the file descriptor
*@argv:is the of file
* Return: always nothing
*/
void check_typing_errors(int n, char *argv[])
{
	if (n == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
}
/**
* main - program that adds positive numbers
* @argc:contains the number of arguments passed to the program
* @argv:is a one-dimensional array of strings.
* Return: the answer
*/
int main(int argc, char *argv[])
{
	int file_descriptor, file_descriptor2;
	ssize_t letters_write, letters_read, closes;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_descriptor = open(argv[1], O_RDONLY);

	check_typing_errors(file_descriptor, argv);

	file_descriptor2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (file_descriptor2 == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while (letters_read > 0)
	{
		letters_read = read(file_descriptor, buf, 1024);

		check_typing_errors(letters_read, argv);

		letters_write = write(file_descriptor2, buf, letters_read);
		if (letters_write == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	closes = close(file_descriptor);
	if (closes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
		exit(100);
	}
	closes = close(file_descriptor2);
	if (closes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor2);
		exit(100);
	}
	return (0);
}
