#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t
 * @head: pointer to the head of the list
 * descr: at the end the head should point to NULL
     we'll moove a temp pointer, as tail always points to NULL
 *   free its memory if not NULL until we get to the tail
 * Return: the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}i
