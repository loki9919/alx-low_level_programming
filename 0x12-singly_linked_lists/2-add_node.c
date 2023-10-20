#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: the head of the linked list
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
