#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
* struct dlistint_s - doubly linked list
* @n: Integer stored in the node
* @next: points to the next node
* @prev: points to the previous node
*
*/
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
	struct dlistint_s *next;
}dlistint_t;

size_t print_dlistint(const dlistint_t *h);




#endif