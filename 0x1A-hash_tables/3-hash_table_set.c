#include "hash_tables.h"
/**
 * hash_table_set - that adds an element to the hash table.
 * @ht: hash table
 * @key: key
 * @value: value
 *
 * Return: 1 or 0
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *new_node = NULL;
	hash_node_t *tmp_node = NULL;
	char *new_value = NULL;

	if (!ht || !key || !value || strlen(key) == 0)
		return (0);

	i = key_index((const unsigned char *)key, ht->size);
	tmp_node = ht->array[i];

	new_value = strdup(value);
	if (!new_value)
		return (0);

	while (tmp_node)
	{
		if (strcmp(tmp_node->key, key) == 0)
		{
			free(tmp_node->value);
			tmp_node->value = new_value;
			break;
		}
		tmp_node = tmp_node->next;
	}

	if (!tmp_node)
	{
		new_node = hash_table_add(key, new_value);
		if (!new_node)
			return (0);
		new_node->next = ht->array[i];
		ht->array[i] = new_node;
	}

	return (1);

}

/**
 * hash_table_add - that adds an element to the hash table.
 * @key: key
 * @value: value
 *
 * Return: new node
 */
hash_node_t *hash_table_add(const char *key, char *value)
{
	hash_node_t *new_node = NULL;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(value);
		return (NULL);
	}
	new_node->key = strdup(key);
	new_node->value = value;
	if (!new_node->key || !new_node->value)
	{
		if (new_node->key)
			free(new_node->key);
		free(value);
		return (NULL);
	}
	return (new_node);
}


