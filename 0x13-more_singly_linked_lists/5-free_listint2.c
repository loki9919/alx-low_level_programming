#include "lists.h"

/**
 * free_listint2 - free list_t list
 * @head: pointer to head of the linked list
 * Reterun: always seccessful
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *temp0;

	if (head == NULL)
	{
		return;
	}
	temp = *head;
	while ((temp0 = temp) != NULL)
	{
		temp = temp->next;
		free(temp0);
	}
	*head = NULL;
}
