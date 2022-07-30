#include "lists.h"

/**
 *print_listint - print elements of list
 *@h: header pointer of the list
 *Return: elementes of the list
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
