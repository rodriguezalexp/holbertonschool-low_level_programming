#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - find len of a db linked list
 * @h: pointer to the start of the linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
