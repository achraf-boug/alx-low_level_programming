#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free a listint_t
 * @head: head of the listint_t
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *current_node = head;
	listint_t *next_node = NULL;

	while (current_node)
	{
		next_node = current_node;
		current_node = current_node->next;
		free(next_node);
	}
}
