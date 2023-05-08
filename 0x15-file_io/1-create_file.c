#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - Creates a file
 * @filename: Name of file
 * @text_content: String to write the file
 * Return: if filename is NULL return -1
 */

int create_file(const char *filename, char *text_content)
{
	int i, j, k;

	if (filename == NULL)
		return (-1);

	i = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (i == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (j = 0; text_content[j]; j++)
		;

	k = write(i, text_content, j);

	if (k == -1)
		return (-1);

	close(i);
	return (1);
}	
