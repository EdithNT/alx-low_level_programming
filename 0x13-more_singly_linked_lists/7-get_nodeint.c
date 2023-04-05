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
	unsigned int d = 0;

	temp = head;
	if (head == NULL)
		return (NULL);
	while (d != index && temp != NULL)
	{
		index++;
		temp = temp->next;
	}
	if (temp == NULL)
		return (NULL);
	return (temp);
}
