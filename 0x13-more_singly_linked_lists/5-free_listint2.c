#include "lists.h"

/**
 * free_listint2 - frees a listint_t
 * descr: at the end the head should point to NULL
 * @head: head of linked list
 * we'll moove a temp pointer, as tail always points to NULL
 * free its memory if not NULL until we get to the tail
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (*head == NULL)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
	}
}
