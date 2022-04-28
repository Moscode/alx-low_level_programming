#include "lists.h"

/**
 * sum_listint - sum all the data of a listint_t list
 * @head: head pointer
 * Return: sum of all the data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	int data = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		data = head->n;
		sum += data;
		head = head->next;
	}
	return (sum);
}
