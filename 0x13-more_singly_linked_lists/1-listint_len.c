#include "lists.h"

/**
 * listint_len - A function that returns the length of a linked list
 * @h: a pointer to the head
 * Return: count
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
