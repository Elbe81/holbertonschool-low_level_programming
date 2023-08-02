#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s

{
  int n;
  struct dlistint_s *prev;
  struct dlistint_s *next;
}dlistint_t;

/* Function prototype */
size_t print_dlistint(const dlistint_t *h);

size_t dlistint_len(const dlistint_t *h);

<<<<<<< HEAD
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

=======
>>>>>>> 179f58909be2b457fc331f07639cf4c74116e879
#endif /* LISTS_H */
