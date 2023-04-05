#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elemens of
 *    linked list
 * @h: linked list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nos_nodes = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		nos_nodes++;
	}
	return (nos_nodes);
}
