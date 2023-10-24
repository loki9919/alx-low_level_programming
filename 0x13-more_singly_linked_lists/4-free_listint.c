#include "lists.h"

/**
 * free_listint - free list_t list
 * @head: the head of the linked list
 * Reterun: always seccessful
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
