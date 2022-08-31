#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: the hash table
 * Return: Nothing, just print inside
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned int j;
	hash_node_t *tmp = NULL;
	char *a = "";

	if (ht == NULL)
		return;
	printf("{");

	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			tmp = ht->array[j];
			while (tmp != NULL)
			{
				printf("%s\'%s\': \'%s\'", a, tmp->key, tmp->value);
				a = ", ";
				tmp = tmp->next;
			}
		}
	}
	printf("}\n");
}
