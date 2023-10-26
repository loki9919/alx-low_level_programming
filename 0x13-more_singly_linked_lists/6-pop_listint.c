#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to head node
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *head_node;
	int temp;

	if (*head == NULL)
	{
		return (0);
	}
	head_node = *head;
	temp = head_node->n;
	*head = head_node->next;
	free(head_node);
	return (temp);
}
