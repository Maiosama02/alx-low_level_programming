#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint -  deletes the head node of a listint_t linked lis
 * @head: pointer
 * Return: head node’s data if the linked list is empty return 0
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	ptr = *head;
	n = ptr->n;
	*head = (*head)->next;
	free(ptr);

	return (n);
}
