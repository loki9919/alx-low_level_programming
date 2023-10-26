#include "lists.h"

/**
 * *reverse_listint - function to reverse order of nodes
 * @head:  pointer to head
 * Return: always successful
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *reverse = *head;
	listint_t *temp;

	if (head  == NULL)
	{
		return (NULL);
	}
	while (reverse != NULL)
	{
		reverse = reverse->next;
		reverse = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = reverse;
	}
	*head = temp;
	return (*head);
}
