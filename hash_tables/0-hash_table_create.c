#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array of the hash table
 * Return: Pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tt;

	if (size == 0)
		return (NULL);

	tt = malloc(sizeof(hash_table_t));
	if (!tt)
		return (NULL);

	tt->size = size;
	tt->array = calloc((size_t)tt->size, sizeof(hash_node_t *));
	if (tt->array == NULL)
		return (NULL);


	return (tt);
}
