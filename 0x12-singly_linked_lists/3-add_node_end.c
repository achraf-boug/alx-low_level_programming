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
	char *str_cp;
	int i = 0;
	list_t node;

	str_cp = strdup(str);
	if (str_cp == NULL)
		return (NULL);
	while (str_cp[i++])
		;
	while (*head->next)
		;
	node = {str_cp, i, NULL};
	*head->next = &node;

	free(str_cp);
	return (&node);
}

