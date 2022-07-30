#include "lists.h"

/**
 *listint_len -  returns the number of elements of the list.
 *@h: header pointer of the linked list
 *Return: numbers of elements
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
