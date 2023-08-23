#include "main.h"
#include <string.h>

/**
 * *_strncpy - copies a string
 * @dest: string
 * @src: string
 * @n: input
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	strncpy(dest, src, n);
	while (dest[i] != '\0')
	{
		_putchar(dest[i]);
		i++;
	}
	return (dest);
}
