#include "lists.h"

/**
 * insert_nodeint_at_index - function that inserts a new node at
 * a given position
 * @head: pointer to head of struct listint_t type
 * @idx: unsigned int for location to add node
 * @n: int type for value of new node
 * Return: always successful
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node = malloc(sizeof(listint_t));
	listint_t *temp;
	unsigned int c = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	if (node ==  NULL)
	{
		return (NULL);
	}
	node->n = n;
	node->next = NULL;
	temp = *head;
	if (temp == NULL)
	{
		*head = node;
		node->next = NULL;
		return (node);
	}
	if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}
	while (c != (idx - 1))
	{
		temp = temp->next;
		c++;
		if (temp == NULL)
		{
			free(node);
			return (NULL);
		}
	}
	node->next = temp->next;
	temp->next = node;
	return (node);
}
