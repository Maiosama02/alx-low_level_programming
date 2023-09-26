#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer
 * @index: index of the node
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *prv;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	ptr = *head;
	for (i = 0; i < index; i++)
	{
		prv = ptr;
		ptr = ptr->next;
		if (ptr == NULL)
			return (-1);
	}
	prv->next = ptr->next;
	free(ptr);
	return (1);
}
