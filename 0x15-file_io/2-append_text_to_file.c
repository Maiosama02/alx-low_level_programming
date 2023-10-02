#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name
 * @text_content: NULL terminated string
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int ptr;
	int nwrite;
	int i = 0;

	if (filename == NULL)
		return (-1);

	ptr = open(filename, O_WRONLY | O_APPEND);
	if (ptr == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}
	nwrite = write(ptr, text_content, i);
	if (nwrite == -1)
		return (-1);
	close(ptr);
	return (1);
}
