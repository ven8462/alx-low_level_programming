#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: the key to get the index for
 * @size: the size of the array of the hash table
 *
 * Description: This function uses the djb2 hash function to compute the hash
 * value of the key, and then returns the remainder of the hash value divided
 * by the size of the hash table array. This ensures that the returned index
 * is within the bounds of the array.
 *
 * Return: the index at which the key/value pair should be stored in the array
 * of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
