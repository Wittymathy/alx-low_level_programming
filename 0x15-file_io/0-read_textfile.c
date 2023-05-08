#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: Name of file
 * @letters: Number of letters to be printed
 * Return: if filename is NULL return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int a;
	ssize_t i, j;
	char *buffer;

	if (filename == NULL)
		return (0);

	a = open(filename, O_RDONLY);

	if (a == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (buffer == NULL)
		return (0);

	i = read(a, buffer, letters);
	j = write(STDOUT_FILENO, buffer, i);

	close(a);
	free(buffer);
	return (j);
}
