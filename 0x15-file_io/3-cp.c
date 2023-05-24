#include "main.h"

/**
 * copy_file - checks
 * @from: file_from
 * @to: file_to
 * @arv: arguments
 */

void copy_file(int from, int to, char *arv[])
{
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arv[1]);
		exit(98);
	}
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arv[2]);
		exit(99);
	}
}

/**
 * main - Checks code
 * @arr: Num of Arguments
 * @arv: arguments
 * Return: Always 0 (Success)
 */

int main(int arr, char *arv[])
{
	int from, to, eclose;
	ssize_t chars, words;
	char buffer[1024];

	if (arr != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	from = open(arv[1], O_RDONLY);
	to = open(arv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	copy_file(from, to, arv);

	chars = 1024;
	while (chars == 1024)
	{
		chars = read(from, buffer, 1024);
		if (chars == -1)
			copy_file(-1, 0, arv);
		words = write(to, buffer, chars);
		if (words == -1)
			copy_file(0, -1, arv);
	}

	eclose = close(from);
	if (eclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}

	eclose = close(to);
	if (eclose == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	return (0);
}
