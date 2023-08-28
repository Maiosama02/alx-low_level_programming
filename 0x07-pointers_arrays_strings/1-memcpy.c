#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: string
 * @src: string
 * @n: number of size
 * Return: copied momery
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = n;
	int j = 0;

	for (; j < i; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
