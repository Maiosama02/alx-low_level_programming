#include "main.h"
#include <string.h>

/**
 * *_strcat - concatenates two strings
 * @dest: string
 * @src: string
 * Return: 0
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;

	strcat(dest, src);
	while (dest[i] != '\0')
	{
		_putchar(dest[i]);
		i++
	}
	return (dest);
}
