#include "lists.h"

/**
 * get_nodeint_at_index - return index of node
 * @head: pointer to head of node
 * @index: index of node to be returned
 * Return: always successful
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int c;

	if (head == NULL)
	{
		return (NULL);
	}
	for (c = 0; head != NULL; c++)
	{
		if (index == c)
		{
			temp = head;
			return (temp);
		}
		head = head->next;
	}
	return (NULL);
}
