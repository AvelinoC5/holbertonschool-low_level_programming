#include "lists.h"

/**
 *pop_listint - delte the head node
 *@head: header pointer of the linked list
 *Return: head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int base = 0;

	if (!*head)
		return (0);

	tmp = *head;
	base = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (base);
}
