#include "hash_tables.h"
/**
 * hash_table_get - that retrieves a value associated with the key
 * @ht: hash table
 * @key: key
 * Return: 1 or 0
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *tmp_node = NULL;
	char *value =  NULL;

	if (!ht || !key || strlen(key) == 0)
		return (NULL);

	i = key_index((const unsigned char *)key, ht->size);
	tmp_node = ht->array[i];

	while (tmp_node)
	{
		if (strcmp(tmp_node->key, key) == 0)
			value = tmp_node->value;
		tmp_node = tmp_node->next;
	}

	return (value);
}
