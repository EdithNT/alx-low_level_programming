#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head node (head pointer)
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	/**
	 * to print elements, start from the head pointer
	 * to access the head node, print the data of the head node,
	 * move to the next element in the node,
	 * which is the pointer to the next node, print its data too,
	 * and repeat the process until null is reached
	 */
	size_t i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}

	return (i);
}
