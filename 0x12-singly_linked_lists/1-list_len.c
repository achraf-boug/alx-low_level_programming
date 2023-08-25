#include "lists.h"
/**
 * list_len - calculate the lenght of list_t list.
 * @h: linked list.
 * Return: lenght of list_t list.
 */

size_t list_len(const list_t *h)
{
	size_t nb_nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nb_nodes++;
	}
	return (nb_nodes);
}
