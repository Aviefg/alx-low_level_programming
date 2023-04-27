#include "lists.h"

/**
 * list_len - A function that returns the number of elements
 * @h: A pointer to a linked list
 * Return: len
 */

size_t list_len(const list_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
