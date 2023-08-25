#include "lists.h"
/**
 * add_node - add node at the beginning of a list_t list
 * @head: head of the linked list
 * @str: string to store in the node
 * Return: address of the head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	size_t len;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);

	for (len = 0; str[len]; len++)
		;

	node->len = len;
	node->next = *head;
	*head = node;

	return (*head);
}
