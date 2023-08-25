#include "lists.h"

/**
 * print_list - prints all elements of list_t
 * @h: linked list to print
 *
 * Return: Return the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nb_nodes = 0, i, len;
	char *str;

	while (h->next)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		nb_nodes++;
	}
	return (nb_nodes);
}

