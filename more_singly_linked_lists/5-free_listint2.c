#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: head of the list.
 */

void free_listint2(listint_t **head)
{
	listint_t *newnode;

	if (!head)
		return;

	while (*head)
	{
		newnode = *head;
		*head = (*head)->next;
		free(newnode);
	}
	head = NULL;
}
