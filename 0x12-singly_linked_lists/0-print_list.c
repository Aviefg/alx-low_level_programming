#include "lists.h"

/**
 * print_list - prints all elements of a size_t list
 * @h: a pointer to list
 * Return: sum
 */

size_t print_list(const list_t *h)
{
	int num = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		num++;
	}
	return (num);
}
