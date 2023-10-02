#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file
 * @letters: number of letters it should read and print
 * Return:  number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int ptr;
	char *buff;
	ssize_t nread, nwrite;

	if (filename == NULL)
		return (0);

	ptr = open(filename, O_RDONLY);
	if (ptr == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		close(ptr);
		return (0);
	}
	nread = read(ptr, buff, letters);
	if (nread == -1)
	{
		free(buff);
		close(ptr);
		return (0);
	}
	nwrite = write(STDOUT_FILENO, buff, nread);
	if (nwrite == -1)
	{
		free(buff);
		close(ptr);
		return (0);
	}
	free(buff);
	close(ptr);
	return (nwrite);
}
