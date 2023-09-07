#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array
 * @nmemb: array elements
 * @size: size of array
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i, n;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = nmemb * size;
	ptr = malloc(n);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
		ptr[i] = 0;
	return (ptr);
}
