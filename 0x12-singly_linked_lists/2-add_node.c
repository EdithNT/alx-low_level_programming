#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to first node
 * @str: malloc'ed string
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_head_node;
	int i;

	new_head_node = malloc(sizeof(list_t));
	
	new_head_node->str = strdup(str);
	if (new_head_node != NULL)
	{
		for (i = 1; str[i];)
			i++;
	}
	new_head_node->len = i;
	new_head_node->next = *head;
	*head = new_head_node;

	return (new_head_node);
}
