#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer
 * Return: number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *one, *two, *loop;

	if (head == NULL)
		return (98);
	one = head;
	two = head;
	while (one && two && two->next)
	{
		one = one->next;
		two = two->next->next;
		if (one == two)
		{
			loop = one;
			break;
		}
	}
	if (loop == NULL)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			count++;
			head = head->next;
		}
	}
	else
	{
		while (head != loop)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			count++;
			head = head->next;
		}
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (count);
}
