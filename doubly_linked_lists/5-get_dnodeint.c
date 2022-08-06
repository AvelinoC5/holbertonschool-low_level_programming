#include "lists.h"

/**
 *get_dnodeint_at_index - returns the nth node of a linked list
 *@head: header prointer of the linked
 *@index: index of the node
 *Return: NULL if the head is NULL or the head
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (; i < index; i++)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}

	return (head);
}
