#include "lists.h"

/**
 * list_len - function that returns the number of elements in a
 * linked list_t list.
 * @h: pointer to list_t elements.
 * Return: number of elements.
 */

size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	for (i = 0 ; h != NULL ; i++)
		h = h->next;

	return (i);
}
