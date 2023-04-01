#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: head node
 * @str: malloc'ed string
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	int j = 1;

	temp = malloc(sizeof(list_t));

	if (temp == NULL)
		return (NULL);

	temp->str = (strdup)str;
	for (j; temp[j];)
		j++;
	temp->str = str;
	temp->len = j;
	temp->next = NULL;

	if (*head == NULL)
		*head = temp;
}
