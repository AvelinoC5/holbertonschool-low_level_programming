#include "lists.h"

/**
 *delete_dnodeint_at_index - deletes the node at index
 *@head: header pointer of the linked list
 *@index: index of the node
 *Return: 1 if it success, -1 if at failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	unsigned int i = 0;

	if (!head)
		return (-1);

	if (index == 0)
	{
		if (temp)
			return (-1);

		*head = (*head)->next;
		free(temp);

		if (*head)
			(*head)->prev = NULL;
		return (1);
	}

	for (i = 0; temp != NULL; i++)
	{
		if (i == index)
		{
			if (temp->next)
				temp->next->prev = temp->prev;

			if (temp->prev)
				temp->prev->next = temp->next;

			free(temp);
			return (1);
		}
		temp = temp->next;
	}

	return (-1);
}
