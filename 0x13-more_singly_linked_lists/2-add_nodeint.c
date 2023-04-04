#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: pointer to head pointer
 * @n: integer data
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_headNode;

	/**
	 * to add a node at the beginning of the list,
	 * 1. create a new node(with malloc), and since malloc returns a pointer to
	 * the first byte of the new block, 2. declare that pointer
	 * 3. link that new node that has been created to the existing head node by
	 * assigning the *next to the existing head node, so that the other lists are
	 * not disconnected/missing 4. link the new node to the head pointer,
	 * by assigning the new node to the head pointer
	 */
	new_headNode = malloc(sizeof(listint_t));

	if (new_headNode != NULL)
	{
		new_headNode->n = n;
		new_headNode->next = *head;
		*head = new_headNode;
	}
	return (new_headNode);
}
