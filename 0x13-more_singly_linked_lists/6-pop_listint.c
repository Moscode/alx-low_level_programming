#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: reference to head pointer
 * Return: the head node's data
 */


int pop_listint(listint_t **head)
{
	listint_t *pTmpNode = NULL;
	int deleted_data;

	if ((*head) == NULL || head == NULL)
		return (0);

	pTmpNode = (*head);
	if ((*head) != NULL)
	{
		*head = pTmpNode->next;

		deleted_data = pTmpNode->n;

		free(pTmpNode);
	}
	return (deleted_data);
}
