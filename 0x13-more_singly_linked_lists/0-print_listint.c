#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t
 * @h: head node of the list
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nb_nodes = 0;

	while (h)
	{
		printf("%d\n", h.n);
		h = h->next;
		nb_nodes++;
	}
	return (nb_nodes);
}

