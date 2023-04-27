#include "lists.h"

/**
 * free_list - A function that fress a list_t list
 * @head: A pointer to head node
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
