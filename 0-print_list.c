#include "lists.h"
/**
 * print_list - prints all the element of a list_t list
 * @h: pointer to list_t struct
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int count;
	const list_t *ptr = NULL;
	char *nil = "(nil)";

	count = 0;
	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[%d] %s\n", 0, nil);
		else
			printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		count++;
	}
	return (count);
}

