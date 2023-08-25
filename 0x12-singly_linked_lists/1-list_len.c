#include "lists.h"

/**
 * list_len - return the number of elements in a linked list
 * @h: linked list to mesure
 *
 * Return: return h lenght
 */
size_t list_len(const list_t *h)
{
	size_t len = 0;

	while (h->next)
		len++;
	return (len);
}

