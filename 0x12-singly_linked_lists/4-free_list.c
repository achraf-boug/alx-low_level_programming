#include "lists.h"

/**
 * free_list - free a list_t
 * @head: head of list_t
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next_node;

	while (current)
	{
		next_node = current->next;
		free(current->str);
		free(current);
		current = next_node;
	}
}

