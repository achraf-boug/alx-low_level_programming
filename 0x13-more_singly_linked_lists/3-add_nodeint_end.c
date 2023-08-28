#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds new node at the end of the listint_t
 * @head: head of the listint_t
 * @n: number to be inserted
 * Return: return address of head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t *));
	listint_t *current_node = *head;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (current_node == NULL)
		*head = new_node;
	else
	{
		while (current_node->next)
			current_node = current_node->next;
		current_node->next = new_node;
	}

	return (*head);
}

