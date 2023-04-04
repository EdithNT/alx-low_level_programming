#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to head node
 * @n: integer to be stord in new last node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_endNode, *temp;
	/**
	 * to add a node at the end,1. use malloc to create a new node
	 * 2. declare a pointer that malloc will return; the pointer also shows the
	 * starting point of the newly created node
	 * 3. the list will need to be traversed, therefore, declare a temp pointer to
	 * do that job.
	 * NB: listint_t is the struct datatype that has been created
	 * 4. assign address of new node to previous old node
	 */

	new_endNode = malloc(sizeof(listint_t));

	temp = *head;
	
	if (new_endNode == NULL)
		return (NULL);
	else
	{
		new_endNode->n = n;
		new_endNode->next = NULL;
	}
	if (temp != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_endNode;
	}

	return (new_endNode);
}
