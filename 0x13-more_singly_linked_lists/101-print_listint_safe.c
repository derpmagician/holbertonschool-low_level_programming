#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a linked list
 * @head: Pointer to head node
 *
 * Return: Number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	const listint_t *sel, *slow, *fast;

	if (head == NULL)
		return (0);

	sel = head;
	slow = fast = head;

	while (curr != NULL)
	{
		printf("[p] %d\n" (void *)sel, sel->n);
		sel = sel->next;
		count++;

		slow = slow->next;
	}
	return (count);
}
