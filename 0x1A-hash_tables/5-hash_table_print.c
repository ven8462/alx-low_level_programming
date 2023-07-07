#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 *
 * Description: This function prints the key/value pairs in the order
 * that they appear in the array of the hash table.
 * If the hash table is NULL, it doesn't print anything.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	char *sep = "";

	/* Validate the input */
	if (ht == NULL)
		return;

	printf("{");

	/* Traverse the array of the hash table */
	for (i = 0; i < ht->size; i++)
	{
		/* Traverse the linked list at this index */
		for (node = ht->array[i]; node; node = node->next)
		{
			/* Print the key/value pair */
			printf("%s'%s': '%s'", sep, node->key, node->value);
			sep = ", ";
		}
	}

	printf("}\n");
}
