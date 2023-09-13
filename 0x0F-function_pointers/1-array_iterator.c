#include "function_pointers.h"

/**
 * array_iterator - executes a function
 * @array: array
 * @size: size of an array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(arrat[i]);
		}
	}
	else
	{
		return;
	}
}
