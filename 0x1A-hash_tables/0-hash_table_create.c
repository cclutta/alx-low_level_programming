#include "hash_tables.h"
/**
 * hash_table_create -  that creates a hash table
 * @size: size of table
 *
 * Return: newly created table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int i = 0;

	new_table = malloc(sizeof(hash_table_t));

	if (new_table)
	{
		new_table->size = size;
		new_table->array = malloc(sizeof(hash_node_t *) * size);
		if (!new_table->array)
		{
			free(new_table);
			return (NULL);
		}
		while (i < size)
		{
			new_table->array[i] = NULL;
			i++;
		}
	}
	return (new_table);
}


