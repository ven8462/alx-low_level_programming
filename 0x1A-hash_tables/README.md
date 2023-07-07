# 0x1A-hash_tables

*Hash tables in C are structures that map keys to their corresponding values, using an array of linked lists. They employ a hash function to calculate an index for quick access to data. Each 'node' within the table is a struct composed of a key, a value, and a pointer to the next node. Usual operations with hash tables include creating the table, adding and retrieving key-value pairs, and deleting the hash table*

## Below are some of the functions:

- [0-hash_table_create.c](0-hash_table_create.c) - a function that creates a hash table.

- [1-djb2.c](1-djb2.c) - a hash function implementing the djb2 algorithm

- [2-key_index.c](2-key_index.c) -  function that gives you the index of a key.

- [3-hash_table_set.c](3-hash_table_set.c) - a function that adds an element to the hash table.

- [4-hash_table_get.c](4-hash_table_get.c) -  a function that retrieves a value associated with a key.

- [5-hash_table_print.c](5-hash_table_print.c) - a function that prints a hash table.

- [6-hash_table_delete.c](6-hash_table_delete.c) - a function that deletes a hash table.
