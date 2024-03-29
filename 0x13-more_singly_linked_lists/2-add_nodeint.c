#include "lists.h"
#include <string.h>
/**
 * add_nodeint - adds a node at the beginning of a linked list head
 * @head: linked list head
 * @n: int adds node at the beginning of the linked list
 * Description: add_noteit adds a new node beginning
 * Return:the addres of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

