#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>

/* Struct for hash node */
typedef struct hash_node
{
  char *key;
  char *value;
  struct hash_node *next;
} hash_node_t;

/* Struct for hash table */
typedef struct hash_table
{
  size_t size;
  hash_node_t **array;
} hash_table_t;

/* Function prototypes */
hash_table_t *hash_table_create(unsigned long int size);

#endif /* HASH_TABLES_H */

