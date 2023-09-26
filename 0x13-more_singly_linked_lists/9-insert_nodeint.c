#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: pointer
 * @idx: index of the list where the new node should be added
 * @n: data
 * Return: address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *ptr;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	ptr = *head;

	for (i = 0; i < idx - 1; i++)
	{
		if (ptr == NULL)
		{
			free(new);
			return (NULL);
		}
		ptr = ptr->next;
	}
	new->next = ptr->next;
	ptr->next = new;

	return (new);
}
