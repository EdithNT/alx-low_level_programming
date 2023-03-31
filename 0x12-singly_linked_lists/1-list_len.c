#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to data of type list_t
 *
 * Return: number of elements in list
 */

size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	while (h != NULL)
	{
		cnt++;
		h = h->next;
	}

	return (cnt);
}
