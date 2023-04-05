#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head pointer
 * @index: index of the node
 *
 * Return: the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	int d = 0;

	temp = head;
	if (head->next == NULL)
		return (NULL);
	while (d != index)
	{
		index++;
		head = temp->next;
	}
	return (0);
}
