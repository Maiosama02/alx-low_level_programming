#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @max: values
 * @min: values
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		ptr[i] = min + i;
	return (ptr);
}
