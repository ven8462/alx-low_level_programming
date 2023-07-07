#include "hash_tables.h"


/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 *
 * Description: This function deletes a hash table. It frees the key, value,
 * each node in the linked list,
 * the array of the hash table, and finally the hash table itself.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node, *next_node;

	/* Validate the input */
	if (ht == NULL)
		return;

	/* Traverse the array of the hash table */
	for (i = 0; i < ht->size; i++)
	{
		/* Traverse the linked list at this index */
		for (node = ht->array[i]; node; node = next_node)
		{
			/* Save the pointer to the next node */
			next_node = node->next;

			/* Free the key and the value */
			free(node->key);
			free(node->value);

			/* Free the node */
			free(node);
		}
	}

	/* Free the array of the hash table */
	free(ht->array);

	/* Free the hash table */
	free(ht);
}
