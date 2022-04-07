#include "main.h"
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
	if (file_descriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",argv[1]);
		exit(98);
	}
	file_descriptor2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	if (file_descriptor2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit (99);
	}
	while (letters_read > 0)
	{
		letters_read = read(file_descriptor, buf, 1024);
		if (letters_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		letters_write = write(file_descriptor2, buf, letters_read);
		if (letters_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	closes = close(file_descriptor);
	if (closes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",file_descriptor);
		exit(100);
	}
	closes = close (file_descriptor2);
	if (closes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor2);
		exit(100);
	}
	return (0);
}
