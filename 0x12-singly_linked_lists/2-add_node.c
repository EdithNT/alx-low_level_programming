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
	list_t *temp;
	int i;

	temp = malloc(sizeof(list_t));
	
	temp->str = strdup(str);
	if (temp != NULL)
	{
		for (i = 1; str[i]; i++)
			temp = temp->next;
	}
	temp = head;
	return (temp);
}
