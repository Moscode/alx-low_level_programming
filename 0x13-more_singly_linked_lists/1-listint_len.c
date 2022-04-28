#include "lists.h"

/**
 * listint_len -  returns the number of elements in a linked listint_t list.
 * @h: pointer to the first element in the list
 * Return:  returns the number of elements in a linked listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	size_t list_count = 0;

	while (h != NULL)
	{
		++list_count;
		h = h->next;
	}
	return (list_count);
}
