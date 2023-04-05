#include <stdio.h>
#include "lists.h"

/**
 * listint_len - prints the nos of elements in a linkied list
 * @h: linked list
 *
 * Return: nos of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nos_element = 0;
	const listint_t *current = h;

	while (curent != NULL)
	{
		current = current->next;
		nos_element++;
	}
	return (nos_element);
}
