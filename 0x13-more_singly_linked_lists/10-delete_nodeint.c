#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @head: pointer to head
 * @index: point of node deletion
 * Return: Always successful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *temp0;
	unsigned int c =  0;

	if (head  == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (; c != (index - 1); c++)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			return (-1);
		}
	}
	temp0 = temp->next;
	temp->next = temp0->next;
	free(temp0);
	return (1);
}
