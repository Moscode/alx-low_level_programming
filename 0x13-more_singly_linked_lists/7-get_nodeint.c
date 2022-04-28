#include "lists.h"

/**
 * get_nodeint_at_index - finds the nth node of a listint_t linked list
 * @head: head poiter
 * @index: index of the node
 * Return: the index node of node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;

	if (head == NULL)
		return (NULL);

	for (count = 0; count < index; count++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}
	return (head);
}
