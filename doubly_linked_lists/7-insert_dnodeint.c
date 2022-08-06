#include "lists.h"

/**
* insert_dnodeint_at_index - function that inserts a new node at a given
* position of a doubly linked list.
* @h: head of the list.
* @idx: index of the list where the new node should be added,
* index starts at 0.
* @n: number to add.
* Return: the address of the new node, or NULL if it failed.
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 1;
	dlistint_t *new_head = NULL, *new = NULL;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	new = *h;

	while (new)
	{
		if (i == idx)
		{
			new_head = add_dnodeint(&new->next, n);
			new_head->prev = new;
			return (new_head);
		}
		new = new->next;
		i++;
	}

	return (NULL);
}
