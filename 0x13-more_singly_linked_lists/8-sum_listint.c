#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t linked list
 * @head: head pointer
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;

	return sum_listint(temp->next) + temp->n;
}
