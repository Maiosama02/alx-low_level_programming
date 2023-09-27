#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer
 * Return: address of the node, or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *one, *two;

	if (head == NULL)
		return (NULL);

	one = head;
	two = head;

	while (one && two && two->next)
	{
		one = one->next;
		two = two->next->next;
		if (one == two)
			break;
	}
	if (one != two)
		return (NULL);
	one = head;
	while (one != two)
	{
		one = one->next;
		two = two->next;
	}
	return (one);
}
