#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: pointer to head node
 * Return: pointer to head node, NULL if fails
 **/


listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev_node, *next_node;

	if ((*head) == NULL)
		return (NULL);

	prev_node = *head;
	next_node = (*head)->next;
	prev_node->next = NULL;

	while (next_node != NULL)
	{
		*head = next_node;
		next_node = next_node->next;
		(*head)->next = prev_node;
		prev_node = *head;
	}
	return (*head);
}
