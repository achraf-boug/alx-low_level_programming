#include "lists.h"

/**
 * add_node - add a new node at the beginning of a list_t
 * @head: first node of list_t
 * @str: string to be added into the list_t
 *
 * Return: address of the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	char *str_cp = strdup(str);
	int i = 0;
	list_t *node = (list_t *)malloc(sizeof(list_t));

	if(!node)
		return (NULL);

	while(str_cp[i++])
		;
	node->str = str_cp;
	node->len = i;
	node->next = *head;

	free(str_cp);
	return (node);
}

