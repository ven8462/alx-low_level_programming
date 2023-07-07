#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table you want to add or update the key/value to
 * @key: the key, which cannot be an empty string
 * @value: the value associated with the key, which must be
 * duplicated and can be an empty string
 *
 * Description: This function adds a key/value pair to the hash table.
 * If the key already exists,
 * the value is updated. If there is a collision,
 * the new node is added at the beginning of the list.
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current_node;

/* Check if the ht key and value are not NULLand key is not an empty string*/
	if (!ht || !key || !*key || !value)
		return (0);

	/* Calculate the index in the htarray where the key/value pair*/
	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];

	/* Check if a node with the same key already exists in the hash table */
	while (current_node)
	{
		if (!strcmp(current_node->key, key))
		{
			/* If node with same key exists,update node, return 1*/
			free(current_node->value);
			current_node->value = strdup(value);
			return (1);
		}
		current_node = current_node->next;
	}

	/* If no node with the same key exists, create a new node */
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];

	/* Add new node to the beginning of the list at the calculated index*/
	ht->array[index] = new_node;

	return (1); /* Return 1 to indicate success */
}
