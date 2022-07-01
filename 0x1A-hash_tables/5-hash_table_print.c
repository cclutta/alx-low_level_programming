#include "hash_tables.h"
/**
 * hash_table_print - that prints a hash table
 * @ht: hash table
 *
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp_node = NULL;
	unsigned long int i = 0;
	char *c = "";

	if (ht)
	{
		printf("{");
		while (i < ht->size)
		{
			tmp_node = ht->array[i];

			while (tmp_node)
			{
				printf("%s", c);
				c = ", ";

				if (tmp_node->key)
					printf("'%s': '%s'", tmp_node->key, tmp_node->value);

				tmp_node = tmp_node->next;
			}
			i++;
		}
		printf("}\n");
	}
}

