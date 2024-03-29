#include "lists.h"

/**
 * free_listint - frees linked list
 *
 * @head: head of listint_t
 */

void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
