#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: head of the list.
 * @str: the elements.
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{	
	list_t *newnode;
	int i = 0;
	list_t *lastnode = *head;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		free(newnode);
		return (NULL);
	}

	for (; str[i]; i++)
		;

	newnode->str = strdup(str);
	newnode->len = i;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	while (lastnode->next)
		lastnode = lastnode->next;

	lastnode->next = newnode;

	return (newnode);
}
