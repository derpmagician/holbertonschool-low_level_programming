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
	int count = 0, flag = 0;
	const listint_t *sel, *slow, *fast;

	if (head == NULL)
		return (0);

	sel = head;
	fast = head->next;
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		count++;

		if (flag == 0 && fast != NULL && fast->next != NULL && slow != NULL)
		{
			if (fast == slow)
			{
				flag = 1;
				slow = sel;
			}
			fast = fast->next->next;
		}
		if (flag == 1 && slow == head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;
		}
		slow = slow->next;
	}
	return (count);
}
