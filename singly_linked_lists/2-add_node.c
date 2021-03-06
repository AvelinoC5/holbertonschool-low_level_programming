#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: head of the list.
 * @str: the elements.
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int i = 0;

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
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
