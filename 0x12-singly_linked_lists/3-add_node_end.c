#include "lists.h"

/**
 * add_node_end - add node at the end of a list_t list.
 * @head: head of the linked list
 * @str: string to store in the node
 * Return: address of the head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *current_node;
	size_t len;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;
	current_node = *head;

	while (current_node->next != NULL)
		current_node = current_node->next;

	current_node->next = new_node;

	return (*head);
}
