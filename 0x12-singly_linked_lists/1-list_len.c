#include "lists.h"

/**
 * list_len - number of elements in a linked list_t list
 * @h: singly linked list
 * Return: return the number of elements
 */
size_t list_len(const list_t *h)
{
	int c;

	for (c = 0; h != NULL; c++)
	{
		h = h->next;
	}
	return (c);
}
