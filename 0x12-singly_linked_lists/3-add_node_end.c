#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * add_node_end - adds new node at the end
 * @head: pointer
 * @str: string
 * Return: address of new element or null if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *end;
	unsigned int count = 0;

	while (str[count])
		count++;

	if (head == NULL || str == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = count;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	end = *head;
	while (end->next != NULL)
	{
		end = end->next;
	}
	end->next = new;
	return (new);
}
