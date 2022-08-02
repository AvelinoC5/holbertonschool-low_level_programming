#include "lists.h"

/**
 *get_nodeint_at_index - returns the nth node of a list
 *@head: header pointer of the linked list
 *@index: index of the node
 * Return: NULL if the head is NULL or head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	for (i = 0; i < index; i++)
	{
		if (!head)
			return (NULL);
		head = head->next;
	}
	return (head);
}
