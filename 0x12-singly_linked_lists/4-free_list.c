#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: ptr to head node
 *
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *list;

	while (head != NULL)
	{
		list = head;
		free(list);
		list = head->next;
	}
}
