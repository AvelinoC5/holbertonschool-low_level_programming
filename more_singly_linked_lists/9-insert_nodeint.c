#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position.
 * @head: head of the list.
 * @idx: index of the list where the new node should be added.
 * @n: number to add.
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *newnode = *head, *newnode_2;

	if (head == NULL)
		return (NULL);

	if (idx != 0)
	{
		for (; i < idx - 1 && newnode != NULL; i++)
			newnode = newnode->next;

		if (newnode == NULL)
			return (NULL);
	}

	newnode_2 = malloc(sizeof(listint_t));

	if (newnode_2 == NULL)
		return (NULL);

	newnode_2->n = n;

	if (idx == 0)
	{
		newnode_2->next = *head;
		*head = newnode_2;
		return (newnode_2);
	}

	newnode_2->next = newnode->next;
	newnode->next = newnode_2;

	return (newnode_2);
}
