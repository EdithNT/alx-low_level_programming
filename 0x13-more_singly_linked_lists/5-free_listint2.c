#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to head pointer
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *link;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		link = *head;
		(*head) = (*head)->next;
		free(link);
	}
	head = NULL;
}
