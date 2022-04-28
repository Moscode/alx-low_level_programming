#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: reference to head pointer
 * @n: new data to add
 * Return: address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* allocate memory to the new node */
	listint_t *new_node = malloc(sizeof(listint_t));

	/* check allocated  memory */
	if (new_node != NULL)
	{
		/* put the desire data */
		new_node->n = n;

		/* give the address of the first node */
		new_node->next = *head;

		/* assign the address of new node to head */
		*head = new_node;
	}
	else
	{
		return (NULL);
	}
	return (new_node);
}
