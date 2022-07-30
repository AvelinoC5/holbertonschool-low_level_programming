#include "lists.h"

/**
 *add_nodeint_end - adds a new node at the end of a list
 *@head: header pointer of the list
 *@n: input arguments of the list
 *Return: head adds node at the end of the list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode, *lastnode;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
		*head = newnode;

	else
	{
		lastnode = *head;
		while (lastnode->next != NULL)
			lastnode = lastnode->next;

		lastnode->next = newnode;
	}
	return (*head);
}
