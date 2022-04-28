#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptmp_node, *next_node;

	if (head == NULL || head->next == NULL)
		return (NULL);

	ptmp_node = head->next;
	next_node = (head->next)->next;

	while (next_node)
	{
		if (ptmp_node == next_node)
		{
			ptmp_node = head;

			while (ptmp_node != next_node)
			{
				ptmp_node = ptmp_node->next;
				next_node = next_node->next;
			}

			return (ptmp_node);
		}

		ptmp_node = ptmp_node->next;
		next_node = (next_node->next)->next;
	}

	return (NULL);
}
