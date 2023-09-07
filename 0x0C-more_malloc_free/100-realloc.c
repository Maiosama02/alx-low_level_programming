#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block
 * @ptr: pointer
 * @old_size: size
 * @new_size: size
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_sie);
	if (new_ptr == NULL)
		return (NULL);
	old_ptr = ptr
		for (i = 0; i < old_size && i < new_size; i++)
			new_ptr[i] = old_ptr[i];
	free(ptr);
	return (new_ptr);
}
