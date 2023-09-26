#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer
 * Return: nothing
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
