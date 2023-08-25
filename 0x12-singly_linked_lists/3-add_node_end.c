#include "lists.h"

/**
 * add_node_end - add a new node at the end of a list_t
 * @head: first node of list_t
 * @str: string to be added into the list_t
 *
 * Return: address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *str_cp = strdup(str);
	int i = 0;
	list_t *node = (list_t *)malloc(sizeof(list_t));

	if (node == NULL)
		return (NULL);
	while (str_cp[i++])
		;
	while ((*head)->next)
		;
	node->str = str_cp;
	node->len = i;
	node->next = NULL;
	(*head)->next = node;

	free(str_cp);
	return (node);
}

