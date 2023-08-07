#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: Text file to be read
 * @letters: number of letters to be read and printed
 * Return: Actual number of letter that can be read and printed,
 * 0 if failed or NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bu;
	ssize_t f;
	ssize_t wr;
	ssize_t s;

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	bu = malloc(sizeof(char) * letters);
	s = read(f, bu, letters);
	wr = write(STDOUT_FILENO, bu, s);

	free(bu);
	close(f);
	return (wr);
}
