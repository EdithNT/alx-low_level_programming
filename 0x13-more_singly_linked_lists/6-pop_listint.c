#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to head pointer
 *
 * Return: head node's data(n), or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	/**
	 * delete a node: declare and assign a temp node(pointer) to head,
	 * move the head pointer to
	 * the second node, free the memory of the deleted node with
	 * the declared pointer
	 */

	if (head == NULL || *head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);

	return (n);
}
