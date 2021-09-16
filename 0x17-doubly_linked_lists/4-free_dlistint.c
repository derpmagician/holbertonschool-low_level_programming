#include "lists.h"

/**
  * free_dlistint - Free a doubly linked list
  * @head: The head of the doubly linked list
  *
  * Return: Nothing
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
