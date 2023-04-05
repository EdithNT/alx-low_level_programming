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

	list = head;
	while (head != NULL)
	{
		list = head->next;
		free(list->str);
		free(list);
	}
}
