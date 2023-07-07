#include "hash_tables.h"

#include <string.h> /* Required for strcmp() */

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 *
 * Description: it retrieves the value associated with a key in the ht
 * If the key is not found, it returns NULL.
 *
 * Return: the value associated with the element, or NULL if key not be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	/* Validate the input */
	if (!ht || !key || !*key)
		return (NULL);

	/* Get the index of the ht where the key/value pair should be stored */
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	/* Traverse the linked list at this index and look for the key */
	while (node)
	{
		if (!strcmp(node->key, key)) /* If matching key found */
		{
			/* Return the associated value */
			return (node->value);
		}
		node = node->next;
	}

	/* If the key was not found, return NULL */
	return (NULL);
}
