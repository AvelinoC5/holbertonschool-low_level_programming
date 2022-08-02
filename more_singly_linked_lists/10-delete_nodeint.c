#include "lists.h"

/**
 *delete_nodeint_at_index - deletes the node at index index of linked lis
 *@head: header pointer of the linked list
 *@index: index of the nodes in liked list
 *Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *newnode, *data = *head;

	if (!data)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(data);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (!data->next)
			return (-1);

		data = data->next;
	}

	newnode = data->next;
	data->next = newnode->next;
	free(newnode);

	return (1);
}
