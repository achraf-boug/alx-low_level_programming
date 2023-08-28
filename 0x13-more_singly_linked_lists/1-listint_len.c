#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t
 * @h: head of linked list
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t nb_nodes = 0;

	while (h)
	{
		h = h->next;
		nb_nodes++;
	}

	return (nb_nodes);
}

