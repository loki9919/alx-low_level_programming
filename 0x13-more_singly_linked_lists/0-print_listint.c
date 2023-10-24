#include "lists.h"

/**
 * print_listint -  prints all the elements of a listint_t list
 * @h: listint_t type of node struct
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int c = 0;

	for (; h != NULL; c++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (c);
}
