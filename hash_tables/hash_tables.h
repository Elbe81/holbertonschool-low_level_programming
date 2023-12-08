#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>

/**
 * struct hash_node - Node structure for a hash table
 * @key: The key (string) associated with the node
 * @value: The value (string) associated with the key
 * @next: Pointer to the next node in case of collisions
 */

typedef struct hash_node
{
 char *key;
 char *value;
 struct hash_node *next;
} hash_node_t;

/**
 * struct hash_table - Hash table structure
 * @size: The size of the array in the hash table
 * @array: An array of pointers to hash nodes
 */

typedef struct hash_table
{
 size_t size;
 hash_node_t **array;
} hash_table_t;

/* Function prototypes */
hash_table_t *hash_table_create(unsigned long int size);

#endif /* HASH_TABLES_H */

