#include "lists.h"

/**
 * free_list - free list_t list
 * @head: the head of the linked list
 * Return: always 0
 */
void free_list(list_t *head)
{
	list_t *c;

	while ((c = head) != NULL)
	{
		head = head->next;
		free(c->str);
		free(c);
	}
}
