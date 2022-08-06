#include "lists.h"

/**
* add_dnodeint - function that adds a new node at the beginning of a doubly
* linked list.
* @head: head of the list.
* @n: integer data.
* Return: the address of the new element, or NULL if it failed.
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_head;

	new_head = malloc(sizeof(dlistint_t));

	if (!new_head)
	{
		free(new_head);
		return (NULL);
	}

	new_head->n = n;
	new_head->next = *head;
	new_head->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new_head;
	*head = new_head;

	return (new_head);
}
