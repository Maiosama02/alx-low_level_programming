#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: poiner
 * Return: pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv, *nex;

	if (head == NULL || *head == NULL)
		return (NULL);

	prv = NULL;
	while (*head != NULL)
	{
		nex = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = nex;
	}

	*head = prv;
	return (*head);
}
