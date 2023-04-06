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
	list_t *endNode;/* new node to be created */
	list_t *temp; /* temp ptr for traversing list */
	/**
	 * j is for iterating to get the length of node
	 */
	int j;

	endNode = malloc(sizeof(list_t));

	if (*head == NULL)
		*head = endNode;
	if (endNode == NULL)
		return (NULL);

	endNode->str = strdup(str);
	for (j = 0; str[j]; j++)
		;
	endNode->len = j;
	endNode->next = NULL;

	temp = *head; /* assign ptr head to temp */

	if (temp == NULL)
		*head = endNode;
	while (temp->next != NULL)
	{
		temp = temp->next;
		temp->next = endNode;
	}
	return (*head);
}
