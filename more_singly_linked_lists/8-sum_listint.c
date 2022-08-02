#include "lists.h"

/**
 *sum_listint - addition all number of the list
 *@head: header pointer of the linked list
 *Return: 0 if the head is NULL or add
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	if (!head)
		return (0);

	while (head)
	{
		add += head->n;
		head = head->next;
	}

	return (add);
}
