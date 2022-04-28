#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: reference to head
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL;
	listint_t *first_node = NULL;

	if (head == NULL)
		return;

	first_node = *head;
	if (*head != NULL)
	{
		while (first_node != NULL)
		{
			tmp = first_node;

			first_node = first_node->next;

			free(tmp);
		}
		*head = NULL;
	}
}
