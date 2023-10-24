#include "lists.h"

/**
 * listint_len -  number of elements in a linked listint_t list
 * @h: listint_t type of node struct
 * Return:  number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int c = 0;

	for (; h != NULL; c++)
	{
		h = h->next;
	}
	return (c);
}
