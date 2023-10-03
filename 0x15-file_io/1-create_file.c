#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file to be created
 * @text_content: string to write to the file
 * Return: 1 on success, otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int f, wr, l = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(f, text_content, l);

	if (f == -1 || wr == -1)
		return (-1);

	close(f);

	return (1);
}
